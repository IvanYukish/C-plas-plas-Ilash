#include <utility>

//
// Created by yukish on 22.03.19.
//



#include <iostream>
#include "string"
#include "ctime"
#include <algorithm>

using namespace std;

class UsersTable {
public:
    int numberPassport;
    string lastname;
    string specialty;
    int experience;
    double average_salary;
    int date[3]{};

    struct Date {
        int day;
        int month;
        int year;
    };

    UsersTable(string lastname, string specialty, int numberPassport, int experiance, double average_salary,
               const int date[]) {
        this->lastname = std::move(lastname);
        this->specialty = std::move(specialty);
        this->numberPassport = numberPassport;
        this->experience = experiance;
        this->average_salary = average_salary;
        for (int j = 0; j < 3; j++)
            this->date[j] = date[j];
    }


    void SortingForDate() {
        struct Date input[5];

        for (int i = 0; i < 5; i++) {
            cin >> input[i].day;
            cin >> input[i].month;
            cin >> input[i].year;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (input[i].year > input[j].year) {
                    struct Date temp = input[i];
                    input[i] = input[j];
                    input[j] = temp;
                } else if (input[i].year == input[j].year && input[i].month > input[j].month) {
                    struct Date temp = input[i];
                    input[i] = input[j];
                    input[j] = temp;
                } else if (input[i].year == input[j].year && input[i].month == input[j].month &&
                           input[i].day > input[j].day) {
                    struct Date temp = input[i];
                    input[i] = input[j];
                    input[j] = temp;
                }

            }
        }
        for (int i = 0; i < 5; i++) {
            cout << input[i].day << " " << input[i].month << " " << input[i].year;
            cout << endl;
        }
    }

    void sortLastname(string &str) {
        sort(str.begin(), str.end());
        cout << str;
    }

};



