//Write a program which reads n (e.g. n=10) numbers between 0 and 99 (randomly chosen) 
//in a loop and finds their minimum and maximum at the same time

#include "pch.h"
#include <iostream>
#include <random>
#include <ctime>

int main()
{
	srand(time(0));
	int n;
	std::cin >> n;
	int checking[] = {0,99};
	for (int i=0; i < n; i++)
	{
		int input = rand()%100;
		
		if (input>checking[0])
		{checking[0] = input;}

		if (input<checking[1])
		{checking[1] = input;}
	}

	std::cout << "Max is:" << checking[0]<<std::endl;
	std::cout << "Min is:" << checking[1]<<std::endl;
	
	system("pause");
	return 0;
}