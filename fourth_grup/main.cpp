#include <iostream>
#include "Bracket.h"
#include <stdio_ext.h>
#include "Spiral.h"

using namespace std;


int NSD(int a, int b);

void timetable_for_multipliers();

int main() {
    int n, nsd, a, nsk = 0;
    cin >> n;
    cin >> nsd;
    for (int i = 2; i <= n; i++) {
        cin >> a;
        nsk = a / NSD(a, nsd) * nsd;
    }
    cout << nsk << endl;

    string some_text;
    cout << "Enter your brackets : ";
    cin >> some_text;
    Bracket obj;
    for (char i : some_text) {
        if (i == '(' || i == '[' || i == '{') {
            obj.addBracket(i);
        }
        if (i == ')' || i == ']' || i == '}') {
            char tmp;
            i == ')' ? tmp = '(' : i == ']' ? tmp = '[' : tmp = '{';
            if (obj.checkBrakets(tmp)) {
                cout << "Brackets confirmed" << endl;
            } else {
                cout << "Brackets do not meet each other!" << endl;
                break;
            }
        }
    }

    int m;
    cout << "Write array size: ";
    cin >> m;
    spiral mas(m);
    mas.obr();
    mas.output();

    timetable_for_multipliers();

    return 0;
}


int NSD(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return a + b;
}


void timetable_for_multipliers() {
    int n;
    cin >> n;
    int d = 2;
    while (d * d <= n) {
        if (n % d == 0) {
            cout << d << " ";
            n /= d;
        } else {
            d++;
        }
    }
    if (n > 1)
        cout << n;
}