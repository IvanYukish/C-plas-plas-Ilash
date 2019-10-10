#include <iostream>
#include <vector>
#include <algorithm>
#include "string"
#include "math.h"
#include <typeinfo>
#include "HardDrive.h"
#include "PhoneBook.h"
#include "Labirint.h"
#include "Kombinatoruka.h"
#include "MatrixMultiplications.h"

using namespace std;

bool is_palindrom(string line);

void prime_number(int n);

vector<string> split(const string &s);

void LongestWord(std::string &str);

void matrix_multiplication(double **pMas, const int Rows, const int Cols);

int main() {
    cout << "is_palindrom - ";
    cout << is_palindrom("addhhh") << endl;

    cout << "prime number list - ";
    prime_number(32);
    cout << endl;

    string word = "Ny Йорк Никс USA Вашингтон Уизардз USA";
    cout << endl;
    cout << word << endl;
    vector<string> word_list = split(word);
    LongestWord(word);
    cout << endl;

    PhoneBook user = PhoneBook();
    user.add_user("ivan", "380689033378");
    user.add_user("van", "380689033378");
    user.add_user("in", "380689033378");
    user.add_user("ivsn", "380689033378");
    user.add_user("ivansss", "380739033378");
    user.life_user();

    Combinatorics comb = Combinatorics();
    cout<<comb.combination(10,5)<<endl;
    cout<<comb.permutations(6)<<endl;
    cout<<comb.placing(7,5)<<endl;

    matrix matMul = matrix();
    matMul.multiplication();
    matMul.free();

// maze
    vector<state> r = solve_wide(start_state());
    for (int i = 0; i < r.size();) {
        cout << "Variant " << i + 1 << ":" << endl;
        show_state(r[i]);
        cout << endl;
        return 0;
    }
}


    bool is_palindrom(string line) {
        int len = static_cast<unsigned int>(line.length());
        bool palindrom = true;
        for (int i = 0; i < len / 2; ++i) {
            if (line[i] != line[len - i - 1]) {
                palindrom = false;
                break;
            }
        }
        return palindrom;
    }

    void prime_number(int n) {
        for (int j = 0; j < n; ++j) {
            bool mitka = true;
            for (int i = 2; i < sqrt(n); ++i) {
                if (j % i == 0) {
                    mitka = false;
                }
            }
            if (mitka) {
                cout << j << ' ';
            }
        }
    }

    inline bool is_space(char c) {
        return std::isspace(c);
    }

    inline bool is_not_space(char c) {
        return !std::isspace(c);
    }

    vector<string> split(const string &s) {
        typedef string::const_iterator iter;
        vector<string> ret;
        iter i = s.begin();
        while (i != s.end()) {
            i = find_if(i, s.end(), is_not_space); // find the beginning of a word
            iter j = find_if(i, s.end(), is_space); // find the end of the same word
            if (i != s.end()) {
                ret.emplace_back(string(i, j)); //insert the word into vector
                i = j; // repeat 1,2,3 on the rest of the line.
            }
        }
        return ret;
    }

    void LongestWord(std::string &str) {
        std::string workingWord, minWord, maxWord = str;
        for (char i : str) {
            if (i != ' ')
                workingWord += i;
            else {
                if (!workingWord.empty() && (workingWord.length() <= maxWord.length())) {
                    maxWord = workingWord;
                }
                workingWord = "";
            }
            if (workingWord.size() > minWord.size())
                minWord = workingWord;
        }

        std::cout << "max word - " << minWord << endl;
        std::cout << "min word - " << maxWord << endl;
    }
