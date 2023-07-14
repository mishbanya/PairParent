#include <iostream>
#include <cmath>
#include "Money.h"

using namespace std;
/*
* @brief ��������� ����� ����� �������
* @param a ����� double
*/
int CountDidgits(double a);

class Fraction : public Pair
{
public:
    int afterdot;
    /*
    * @brief �����������
    * @param a ���������
    * @param b �����������
    */
    Fraction(int a, int b, int ad) : Pair(a, b), afterdot(ad) {}
    /*
    * @brief ������� ��������
    * @param x �����
    * @return �����, ���������� �� �����
    */
    int add(int x) const override { return a_ + x; }
    /*
    * @brief ������� ���������
    * @param x �����
    * @return �����, ���������� �� �����
    */
    int subtract(int x) const override { return a_ - x; }
    /*
    * @brief ������� ���������
    * @param x �����
    * @return �����, ���������� �� �����
    */
    int multiply(int x) const override { return a_ * x; }
    /*
    * @brief ������� �������
    * @param x �����
    * @return �����, ���������� �� �����
    */
    int divide(int x) const override { return a_ / x; };


    /*
    * @brief ��������� double �� Fraction
    * @return ����� double
    */
    double merge();
    /*
    * @brief ������� �������� � ������ ��������
    * @param other ������ ������
    * @return �����, ���������� �� �����
    */

    Fraction addFrac(Fraction& other) const;
    /*
    * @brief ������� ��������� � ������ ��������
    * @param other ������ ������
    * @return �����, ���������� �� �����
    */
    Fraction subtractFrac(Fraction& other) const;
    /*
    * @brief ������� ��������� � ������ ��������
    * @param other ������ ������
    * @return �����, ���������� �� �����
    */
    Fraction multiplyFrac(int n) const;
    /*
    * @brief ������� ������� � ������ ��������
    * @param other ������ ������
    * @return �����, ���������� �� �����
    */
    Fraction divideFrac(int n) const;

    /*
    * @brief �����
    * @param out ����� ������
    * @param f ������ Money
    * @return ���������� ������������ ������
    */
    friend ostream& operator<<(ostream& out, Fraction f) {
        out << "{" << f.merge() << "}" << endl;
        return out;
    };
};
