#include "algorithm.h"

Algorithm::Algorithm()
{

}

long double Algorithm::Vieta(long int iterationNum)
{
    long double pi_2 = sqrt(0.5);
    for(int i=0;i<iterationNum;i++){
        pi_2 *= sqrt(0.5 + 0.5 * pi_2);
    }
    return 2/pi_2;
}

long double Algorithm::Leibniz(long int iterationNum)
{
    long double pi = 0;
    long double d  = 1.0;
    for(int i=0;i<iterationNum;i++){
        pi += (1.0/d) * pow(-1,i);
        d  += 2.0;
    }
    return 4*pi;
}

long double Algorithm::Newton(long int iterationNum)
{
    long double pi = 0;
    for(int i=0;i<iterationNum;i++){
        pi += 1.0 / (pow(4,i) * fact(1+2*i));
    }
    return 3*pi;
}

long double Algorithm::Newton_Leibniz(long int iterationNum)
{
    long double pi = 3.0;
    long long int j;
    for(int i=1;i<iterationNum;i++){
        j = 2*i;
        pi += (4.0 / (j*(j+1)*(j+2))) * pow(-1,i-1);
    }
    return pi;
}

long double Algorithm::Sharp(long int iterationNum)
{
    long double pi = 0;
    for(int i=0;i<iterationNum;i++){
        pi += (1.0 / ((1+2*i) * pow(3,i))) * pow(-1,i);
    }
    pi *= sqrt(1.0/3);
    return 6*pi;
}

long double Algorithm::Euler(long int iterationNum)
{
    long double pi = 0;
    for(int i=1;i<iterationNum;i++){
        pi += 1.0/(i*i);
    }
    return sqrt(pi*6);
}

long long int Algorithm::fact(int f)
{
    if(f <= 1){
        return 1;
    }
    long long int r = 1;
    for(int i=1;i<=f;i++){
        r *= i;
    }
    return r;
}
