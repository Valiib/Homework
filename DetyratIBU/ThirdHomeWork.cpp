#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
double Average(int *arr, int arrSize) {
	double avg = 0;
	for (int i = 0; i < arrSize; i++)
	{
		avg += double(arr[i]);
	}
	return avg / double(arrSize);
}

int input(int i)
{
	int a = 0;

	cout << "Write the " + to_string(i) + " in row \n";
	cin >> a;
	while (a < 6 || a > 10) {
		cout << "Value is not valid , Try again!\nNumbers that are allowed are (6,10) try only those numbers!\n";
		cin >> a;
	}
	return a;
}

int main()
{
	int arr[10];
	
	
	for (int i = 0; i < 10; i++)
	 arr[i] = input(i + 1);

	cout << "The average is: " << Average(arr, sizeof(arr) / sizeof(int)) << endl;
	system("pause");
	return 0;
}
