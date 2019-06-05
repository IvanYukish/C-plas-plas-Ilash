#include <iostream>
#include "vector"
#include "MultiplyPolinom.h"

using namespace std;

void vectorManipulation(vector<int> vec);

int main() {
    // vectorManipulation
    cout << "VectorManipulation" << endl;
    vector<int> list = {1, 1, 6, 7, 7, 7, 4, 9, 9};

    vectorManipulation(list);


    // Polynom
    cout << endl << "Polynom" << endl;
    cout << "cin 2 Polinoms" << endl;
    string a, b;
    vector<int> a_decomposed(11, 0);
    vector<int> b_decomposed(11, 0);
    getline(cin, a);
    getline(cin, b);
    a_decomposed = decompose(a);
    b_decomposed = decompose(b);
    vector<int> c_decomposed = multiplicate(a_decomposed, b_decomposed);
    string c = compose(c_decomposed);
    erase_the_plus(c);
    if (!c.empty()) cout << c;
    else cout << 0;
    return 0;
}

void vectorManipulation(vector<int> vec) {
    vec.push_back(0);
    vector<int> vector1;
    vector<int> vector2;
    int mitkaBegin = 0, mitkaEnd = 0, iter = 0, single = 0;
    for (int n : vec) {
        iter++;
        if (n % 2 == 1) {
            ++single;
            if (single == 1) {
                mitkaBegin = iter;
            }
            vector1.push_back(n);
        } else {
            if (vector1.size() > vector2.size()) {
                vector2 = vector1;
                vector1.clear();
                mitkaEnd = iter;
                single = 0;
            }
            vector1.clear();
        }
//        mitkaBegin = mitkaEnd - single;

    }
    for (int f : vector2) {
        cout << f << "\t";  // 6  2  3  4  5
    }
    cout << endl << "mitkend - " << mitkaEnd - 1 << endl << mitkaBegin;


}