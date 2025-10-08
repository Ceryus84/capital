/*
Aidan Butcher
CS 3140 - Intro to C++
Computes the final capital with interest and compound interest
Formula: capital = k0 * (1.0 + p/100) ^ n
where k0 = start capital, p = rate, n = run time
*/

#include <iostream>
#include <math.h>
using namespace std;

double capital(double k0, double p, double n)
{
    return (k0 * pow(1.0 + p/100, n));
}

/*Possible calls
Function capital() with two default arguments
Prototype*/
double capital(double k0, double p = 3.5, double n = 1.0);

int main()
{
    double endcap;

    endcap = capital(100.0, 3.5, 2.5); //ok
    endcap = capital(2220, 4.8); //ok
    endcap = capital(3000); //ok

    endcap = capital(); //not ok
    //The first argument has no default value

    endcap = capital(100, n = 3.0); //not ok
    //No gap

    endcap = capital( , 5.0); //not ok

    return 0;
}
