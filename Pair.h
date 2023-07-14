#include <iostream>
using namespace std;

class Pair
{
public:
    int a_;
    int b_;
    /*
    * @brief конструктор
    * @param a первое значение
    * @param b второе значение
    */
    Pair(int a, int b) : a_(a), b_(b) {}
    /*
    * @brief функция сложения
    * @param x число
    * @return 0 
    */
    virtual int add(int x) const=0;
    /*
    * @brief функция вычитания
    * @param x число
    * @return 0
    */
    virtual int subtract(int x) const=0;
    /*
    * @brief функция умножения
    * @param x число
    * @return 0
    */
    virtual int multiply(int x) const=0;
    /*
    * @brief функция деления
    * @param x число
    * @return 0
    */
    virtual int divide(int x) const=0;

};
