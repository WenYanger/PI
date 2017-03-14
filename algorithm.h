#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <math.h>
#include <iostream>

class Algorithm
{
public:
    Algorithm();

    long double Vieta(long int iterationNum);
    long double Leibniz(long int iterationNum);
    long double Newton(long int iterationNum);
    long double Newton_Leibniz(long int iterationNum);
    long double Sharp(long int iterationNum);
    long double Euler(long int iterationNum);

private:
    long long int fact(int f);
};

#endif // ALGORITHM_H
