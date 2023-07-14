#include <iostream>
#include "Pair.h"

using namespace std;

class Money : public Pair
{
public:
    /*
    * @brief конструктор
    * @param a рубли
    * @param b копейки
    */
    Money(int rub, int kop) : Pair(rub, kop) {}
    /*
    * @brief функция сложения
    * @param x число
    * @return количество получившихся копеек
    */
    int add(int x) const override { return (a_ + x) * 100 + b_; }
    /*
    * @brief функция вычитания
    * @param x число
    * @return количество получившихся копеек
    */
    int subtract(int x) const override { return (a_ - x) * 100 + b_; };
    /*
    * @brief функция умножения
    * @param x число
    * @return количество получившихся копеек
    */
    int multiply(int x) const override;
    /*
    * @brief функция деления
    * @param x число
    * @return количество получившихся копеек
    */
    int divide(int x) const override;

    /*
    * @brief функция сложения с другим объектом
    * @param other другой объект
    * @return количество получившихся копеек
    */
    int addMoney(const Money& other) const;
    /*
    * @brief функция вычитания с другим объектом
    * @param other другой объект
    * @return количество получившихся копеек
    */
    int subtractMoney(const Money& other) const;
    /*
    * @brief функция сравнения с другим объектом
    * @param other другой объект
    * @return количество получившихся копеек
    */
    bool isEqual(Money& other);

    /*
    * @brief вывод
    * @param out поток вывода
    * @param m объект Money
    * @return количество получившихся копеек
    */
    friend ostream& operator<<(ostream& out, Money m) {
        out << "{" << m.a_ << "." << m.b_ << "}" << endl;
        return out;
    };
};

