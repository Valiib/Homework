//  Write a C++ code that reads a number from the keyboard and calculated times the product of that number
//(should be read from the keyboard as well).The code should print out the result on the screen using the
//following format :
//N times product of A with itself is equal to .......
//
#include <string>
#include "pch.h"
#include <iostream>
using namespace std;

double GetPower(int a, int b)
{
	
		double result = b;
		if (a - 1 > 0) {
			for (int i = 0; i < a - 1; i++)
			{
				result *= b;
			}
		}
		if (a - 1 < 0) {
			for (int i = 0; i > a - 1; i--)
			{
				result /= b;
			}
		}
		return result;
	
}
int main()
{	
	int Power,Number;
	cin >> Power;
	cin >> Number;
	cout << Power << " times product of " << (Number) <<" with itself is equal to "<<GetPower(Power, Number) <<"\n";
	system("pause");
	return 0;
	
}
