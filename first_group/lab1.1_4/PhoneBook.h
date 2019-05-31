#include <map>
#include "iostream"
#include "string"
#include "cmath"

//
// Created by yukish on 19.05.19.
//

#ifndef STRDATA_PHONEBOOK_H
#define STRDATA_PHONEBOOK_H


using namespace std;

class PhoneBook {

    string name;
    string phone_number;

    map<string, string> user_phone_book;
    map<string, string>::iterator itr;
public:


    void add_user(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
        user_phone_book.insert(pair<string, string>(name, phone_number));
    }

    bool find_life(const string &number) {
        string life = "063 073 093";
        string num = number.substr(2, 3);
        int find_num = static_cast<int>(life.find(num));

        if (number[0] == '3' && find_num > 0) {
            return true;
        } else if (number[0] == '0' && find_num > 0) {
            return true;
        }
        return false;
    }

    void life_user() {
        for (itr = user_phone_book.begin(); itr != user_phone_book.end(); ++itr) {
            if (find_life(itr->second)) {
                cout << itr->first << "---" << itr->second << '\n';
            }
        }
    }


};


#endif //STRDATA_PHONEBOOK_H
