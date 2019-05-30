//
// Created by yukish on 19.05.19.
//

#ifndef STRDATA_LABIRINT_H
#define STRDATA_LABIRINT_H

#include <iostream>
#include <vector>

using namespace std;

const int rows = 7, cols = 7;
int a[rows][cols] = {
        1, 1, 1, 1, 1, 0, 1,
        0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 0, 1, 1,
        1, 0, 0, 0, 0, 1, 1,
        1, 0, 1, 0, 0, 0, 1,
        1, 0, 0, 0, 1, 0, 1,
        1, 1, 1, 1, 1, 1, 1};

typedef struct{int x; int y;} POINT;
typedef vector<POINT> state;

bool add_point(POINT& p, state& s) {
    if (p.x<1 || p.x>cols || p.y<1 || p.y>rows) return false;
    if (a[rows-p.y][p.x-1]>0) return false;

    for (auto it = s.begin(); it != s.end(); it++)
        if (it->x == p.x && it->y == p.y) return false;

    s.push_back(p);
    return true;
}

vector<state> steps(state& s) {
    POINT p = s.back();
    vector<state> r;
    for (int dx = -1; dx <= 1; dx++)
        for (int dy = -1; dy <= 1; dy++) {
            if (abs(dx) == abs(dy)) continue;
            POINT pd; pd.x = p.x + dx; pd.y = p.y + dy;
            state sd = s;
            if (add_point(pd, sd)) r.push_back(sd);
        }
    return r;
}

bool is_solved(state& s) {
    POINT p = s.back();
    return p.x==1 || p.x==cols || p.y==1 || p.y==rows;
}

vector<state> start_state() {
    POINT p; p.x = 5; p.y = 4;
    state s; s.push_back(p);

    vector<state> r; r.push_back(s);
    return r;
}

vector<state> solve_wide(vector<state> ss) {
    vector<state> r, ns;
    for (auto it = ss.begin(); it != ss.end(); it++) {
        state s = *it;
        if (is_solved(s)) r.push_back(s);
        else {
            vector<state> css = steps(s);
            ns.insert(ns.end(), css.begin(), css.end());
        }
    }
    return !r.empty() ? r : ns.empty() ? ns : solve_wide(ns);
}

void show_state(state& s) {
    for (auto it = s.begin(); it != s.end(); it++)
        cout << "(" << it->x << ", " << it->y << ")" << endl;
}

//int main() {
//    vector<state> r = solve_wide(start_state());
//    for (int i = 0; i < r.size(); i++) {
//        cout << "Variant " << i+1 << ":" << endl;
//        show_state(r[i]);
//        cout << endl;
//    }
//    return 0;
//}
#endif //STRDATA_LABIRINT_H
