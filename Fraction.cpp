#include <iostream>
#include "Fraction.h"

using namespace std;

int CountDidgits(double a) {
    long double b; long double c = modf(a, &b);
    int z = 0;
    while (c != 0) {
        a = a * 10;
        c = modf(a, &b);
        z++;
    }
    return z;
}


Fraction Fraction::addFrac(Fraction& other) const{
    Fraction num(*this);
    long double a = num.merge() + other.merge();
    long double b;
    num.a_ = modf(a, &b) * pow(10, CountDidgits(a));
    num.b_ = b;
    num.afterdot = CountDidgits(a);
    return num;
};

Fraction Fraction::subtractFrac(Fraction& other) const
{
    Fraction num(*this);
    long double a = num.merge() - other.merge();
    long double b;
    num.a_ = modf(a, &b) * pow(10, CountDidgits(a));
    num.b_ = b;
    num.afterdot = CountDidgits(a);
    return num;
}

Fraction Fraction::multiplyFrac(int n) const
{
    Fraction num(*this);
    long double a = num.merge() * n;
    long double b;
    num.a_ = modf(a, &b) * pow(10, CountDidgits(a));
    num.b_ = b;
    num.afterdot = CountDidgits(a);
    return num;

}

Fraction Fraction::divideFrac(int n) const
{
    Fraction num(*this);
    long double a = num.merge() / n;
    long double b;
    num.a_ = modf(a, &b) * pow(10, CountDidgits(a));
    num.b_ = b;
    num.afterdot = CountDidgits(a);
    return num;
}
double Fraction::merge() {
    double num = (a_)+(b_) * (pow(10, -afterdot));
    return num;
}