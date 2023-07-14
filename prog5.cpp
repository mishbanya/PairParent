#include <iostream>
#include "Fraction.h"
using namespace std;
	
int main()
{
	Money m(1, 2);
	Fraction f(1, 2,2);
	Fraction d(3, 2, 2);
	cout << m << f << f.addFrac(d) << endl;
}