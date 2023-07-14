#include <iostream>
#include "Money.h"

using namespace std;

int Money::addMoney(const Money& other) const
{
    int rub = a_ + other.a_;
    int kop = b_ + other.b_;
    rub += kop / 100;
    kop %= 100;
    return rub * 100 + kop;
}

int Money::subtractMoney(const Money& other) const
{
    int rub = a_ - other.a_;
    int kop = b_ - other.b_;
    rub += kop / 100;
    kop %= 100;
    return rub * 100 + kop;
}

int Money::multiply(int x) const
{
    int rub = a_ * x;
    int kop = b_ * x;
    rub += kop / 100;
    kop %= 100;
    return rub * 100 + kop;
}

int Money::divide(int x) const
{
    int rub = a_ / x;
    int kop = b_ / x;
    rub += kop / 100;
    kop %= 100;
    return rub * 100 + kop;
}

bool Money::isEqual(Money& other)
{
    return (a_ == other.a_) && (b_ == other.b_);
}

