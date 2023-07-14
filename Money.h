#include <iostream>
#include "Pair.h"

using namespace std;

class Money : public Pair
{
public:
    /*
    * @brief �����������
    * @param a �����
    * @param b �������
    */
    Money(int rub, int kop) : Pair(rub, kop) {}
    /*
    * @brief ������� ��������
    * @param x �����
    * @return ���������� ������������ ������
    */
    int add(int x) const override { return (a_ + x) * 100 + b_; }
    /*
    * @brief ������� ���������
    * @param x �����
    * @return ���������� ������������ ������
    */
    int subtract(int x) const override { return (a_ - x) * 100 + b_; };
    /*
    * @brief ������� ���������
    * @param x �����
    * @return ���������� ������������ ������
    */
    int multiply(int x) const override;
    /*
    * @brief ������� �������
    * @param x �����
    * @return ���������� ������������ ������
    */
    int divide(int x) const override;

    /*
    * @brief ������� �������� � ������ ��������
    * @param other ������ ������
    * @return ���������� ������������ ������
    */
    int addMoney(const Money& other) const;
    /*
    * @brief ������� ��������� � ������ ��������
    * @param other ������ ������
    * @return ���������� ������������ ������
    */
    int subtractMoney(const Money& other) const;
    /*
    * @brief ������� ��������� � ������ ��������
    * @param other ������ ������
    * @return ���������� ������������ ������
    */
    bool isEqual(Money& other);

    /*
    * @brief �����
    * @param out ����� ������
    * @param m ������ Money
    * @return ���������� ������������ ������
    */
    friend ostream& operator<<(ostream& out, Money m) {
        out << "{" << m.a_ << "." << m.b_ << "}" << endl;
        return out;
    };
};

