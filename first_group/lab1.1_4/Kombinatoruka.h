//
// Created by yukish on 19.05.19.
//

#ifndef STRDATA_KOMBINATORUKA_H
#define STRDATA_KOMBINATORUKA_H

class Combinatorics {


    long double fact(int N) {
        if (N < 0)
            return 0;
        if (N == 0)
            return 1;
        else
            return N * fact(N - 1);
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
