// SecondHomeWork.cpp :
#include "pch.h"
#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout << "Add 5 int numbers:"<<endl;
	cin >> a >> b >> c >> d >> e;
	int arr[] = { a,b,c,d,e };
	int size = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];

	}
	cout << "Total sum is: " << sum <<endl;
	system("pause");
	return 0;
}