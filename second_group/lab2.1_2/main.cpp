#include <iostream>
#include <fstream>
#define N 10


using namespace std;
const short int size = 10;

ofstream out;

void booble_sort(int size, int a[]);

void selection_sort(short int size, int a[]);

void sorting_by_inclusion(short int size, int a[]);

void init(short int size, int a[], int start);

void output(short int size, int a[]);

void sorting_a_two_dimensional_array_const(int ( &a )[size][size]);

int main() {
    int a[N];
    int b[N][N];

    init(size, a, 100);
    booble_sort(size, a);
    output(size, a);
    init(size, a, 10);
    selection_sort(size, a);
    output(size, a);
    init(size, a, 50);
    sorting_by_inclusion(size, a);
    output(size, a);
    sorting_a_two_dimensional_array_const(b);

    system("pause");
    return 0;
}

void booble_sort(int size, int a[]) {
    int count = 0;     // К-сть проходів
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                count++;
            }
        }
    }
}

void selection_sort(const short int size, int a[]) {
// Сортування вибором
    int Min = 999, index = -1, count = 0;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i; j < size; ++j) {
            if (Min > a[j]) {
                Min = a[j];
                index = j;
            }
        }
        swap(a[i], a[index]);
        count++;
        Min = 999;
    }
}

void sorting_by_inclusion(const short int size, int a[]) {
// Insertion sort
    for (int i = 0; i < size; ++i) {
        int value = a[i];
        int j = i - 1;
        for (; j >= 0 && a[j] > value; --j)
            a[j + 1] = a[j];
        a[j + 1] = value;
    }
}

void init(const short int size, int a[], int start) {
    cout << "\n" << "Array: " << endl;
    for (int i = 0; i < size; ++i) {
        a[i] = rand() % 1000 + start;
        cout << a[i] << "\t";
    }
    cout << endl;
}

void output(const short int size, int a[]) {
    // Вивід
    out.open("dani.txt", ios::app);
    cout << "\n" << "Result: " << endl;
    for (int i = 0; i < size; ++i)
        cout << a[i] << "\t";
    cout << endl;

    for (int i = 0; i < size; ++i)
        out << a[i] << " ";
    out << endl;
    out.close();
}

void sorting_a_two_dimensional_array_const(int ( &b )[size][size]) {
    int c[size];

    for (int n = 0; n < size; ++n) {
        for (int i = 0; i < size; ++i) {
            b[n][i] = rand() % 1000;
        }
    }
    for (auto &i : b) {
        selection_sort(size, i);
    }


    for (int l = 0; l < size; ++l) {
        for (int m = 0; m < size; ++m) {

            cout << b[l][m] << "|";
        }
        cout << endl;
    }
    for (int l = 0; l < size; ++l) {
        for (int m = 0; m < size; ++m) {
            out << b[l][m] << "|";
        }
//        out << endl;
    }
    out.close();

}