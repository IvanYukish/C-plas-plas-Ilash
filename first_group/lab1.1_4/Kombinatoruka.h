//
// Created by yukish on 19.05.19.
//

#ifndef STRDATA_KOMBINATORUKA_H
#define STRDATA_KOMBINATORUKA_H

class Combinatorics {


    long double fact(int N) {
        if (N < 0) // если пользователь ввел отрицательное число
            return 0; // возвращаем ноль
        if (N == 0) // если пользователь ввел ноль,
            return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
        else // Во всех остальных случаях
            return N * fact(N - 1); // делаем рекурсию.
    }

public:
    long double permutations(int perm) {
        return fact(perm);
    }

    long double placing(short n, short m) {
        if (n > m) {return fact(n) / fact(n-m);}
        else return -1;
    }
    long double combination(short n, short m) {
        if (n > m) {return fact(n) / (fact(n-m)*fact(m));}
        else return -1;
    }
};

#endif //STRDATA_KOMBINATORUKA_H
