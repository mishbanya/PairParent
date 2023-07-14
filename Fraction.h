#include <iostream>
#include <cmath>
#include "Money.h"

using namespace std;
/*
* @brief посчитать числа после запятой
* @param a число double
*/
int CountDidgits(double a);

class Fraction : public Pair
{
public:
    int afterdot;
    /*
    * @brief конструктор
    * @param a числитель
    * @param b знаменатель
    */
    Fraction(int a, int b, int ad) : Pair(a, b), afterdot(ad) {}
    /*
    * @brief функция сложения
    * @param x число
    * @return число, округлённое до целых
    */
    int add(int x) const override { return a_ + x; }
    /*
    * @brief функция вычитания
    * @param x число
    * @return число, округлённое до целых
    */
    int subtract(int x) const override { return a_ - x; }
    /*
    * @brief функция умножения
    * @param x число
    * @return число, округлённое до целых
    */
    int multiply(int x) const override { return a_ * x; }
    /*
    * @brief функция деления
    * @param x число
    * @return число, округлённое до целых
    */
    int divide(int x) const override { return a_ / x; };


    /*
    * @brief получение double из Fraction
    * @return число double
    */
    double merge();
    /*
    * @brief функция сложения с другим объектом
    * @param other другой объект
    * @return число, округлённое до целых
    */

    Fraction addFrac(Fraction& other) const;
    /*
    * @brief функция вычитания с другим объектом
    * @param other другой объект
    * @return число, округлённое до целых
    */
    Fraction subtractFrac(Fraction& other) const;
    /*
    * @brief функция умножения с другим объектом
    * @param other другой объект
    * @return число, округлённое до целых
    */
    Fraction multiplyFrac(int n) const;
    /*
    * @brief функция деления с другим объектом
    * @param other другой объект
    * @return число, округлённое до целых
    */
    Fraction divideFrac(int n) const;

    /*
    * @brief вывод
    * @param out поток вывода
    * @param f объект Money
    * @return количество получившихся копеек
    */
    friend ostream& operator<<(ostream& out, Fraction f) {
        out << "{" << f.merge() << "}" << endl;
        return out;
    };
};
