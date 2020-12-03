#include <iostream>

#include "MyMathLib.h"

using namespace std;

MyMathFuncs MathFun;

int main()
{
	/*double a;
	int b;*/

	cout << "a = ";
	cin >> MathFun.a;
	cout << "b = ";
	cin >> MathFun.b;
	cout << "a + b = " << MathFun.Add(MathFun.a, MathFun.b) << endl;
	cout << "a - b = " << MathFun.Subtract(MathFun.a, MathFun.b) << endl;
	cout << "a * b = " << MathFun.Multiply(MathFun.a, MathFun.b) << endl;
	cout << "a / b = " << MathFun.Divide(MathFun.a, MathFun.b) << endl;
	MathFun.Exchange();
	cout << "a = " << MathFun.a << " & b = " << MathFun.b << endl;
	return 0;
}