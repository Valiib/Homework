//Write a program that deals with three input integer numbers, calculates the differences between them and
//prints out the two numbers with the smallest difference and its value in the following format :

//The number … and ....have the smallest difference equal to .....


#include <iostream>


void CheckSmallestDifference(int a, int b, int c)
{
	int first = abs(a - b);
	int sec = abs(a - c);
	int third = abs(b - c);

	if(first < sec && first < third)
	{
		std::cout << "The number " << a << " and " << b << " have the smallest difference equal to " << first << std::endl;
	}
	if(sec< first && sec < third){
		std::cout << "The number " << a << " and " << c << " have the smallest difference equal to " << sec << std::endl;
	}
	if(third < first && third < sec)
	{
		std::cout << "The number " << b << " and " << c << " have the smallest difference equal to " << third << std::endl;
	}
}

int main()
{
	int a,b,c; 
	std::cin >> a >> b >> c;
	CheckSmallestDifference(a, b, c);
	system("pause");
	return 0;
}
