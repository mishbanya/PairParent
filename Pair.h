#include <iostream>
using namespace std;

class Pair
{
public:
    int a_;
    int b_;
    /*
    * @brief �����������
    * @param a ������ ��������
    * @param b ������ ��������
    */
    Pair(int a, int b) : a_(a), b_(b) {}
    /*
    * @brief ������� ��������
    * @param x �����
    * @return 0 
    */
    virtual int add(int x) const=0;
    /*
    * @brief ������� ���������
    * @param x �����
    * @return 0
    */
    virtual int subtract(int x) const=0;
    /*
    * @brief ������� ���������
    * @param x �����
    * @return 0
    */
    virtual int multiply(int x) const=0;
    /*
    * @brief ������� �������
    * @param x �����
    * @return 0
    */
    virtual int divide(int x) const=0;

};
