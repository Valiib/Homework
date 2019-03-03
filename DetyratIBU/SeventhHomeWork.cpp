
#include "pch.h"
#include <iostream>
#include <string>

int possibleCheck(int b)
{
	int a;
	std::cin >> a;
	if(0>a || b<a)
	{
		std::cout << "Not Correct Value! \n";
		possibleCheck(b);
	}else
	{
		return a;
	}
	return a;
}


std::string CheckIfPassed(int mid,int act,int fin,int tot,int att)
{
	
	double attendnce = double(tot) / double(att);
	int totalScore = mid+act;

	if (totalScore >= 10 && act >= 5 && attendnce >= 0.72)
	{
		totalScore += fin;
		if (totalScore >= 50 && fin >= 10)
		{
			return "Student Passed!";
		}else if(fin < 10)
		{
			return "Student Failed!";
		}else if(totalScore >=20 && fin >=10)
			{
			return "Student can enter makeup";
			}
		else{
			return "Student Falied!";
		}
	}
	else
	{
		return "Student Failed!";
	}
	return "Student Failed!";
}
	



int main()
{
	int midtermExam, activity, finalExam, totalHours, attendance;
	std::cout << "How many Midterm Points he/she has: " << std::endl;
	midtermExam = possibleCheck(40);
	std::cout << "How many Activity Points he/she has: " << std::endl;
	activity = possibleCheck(20);
	std::cout << "How many finals Points he/she has: " << std::endl;
	finalExam = possibleCheck(40);;
	std::cout << "How much are total number of hours in class he/she had: " << std::endl;
	std::cin >> totalHours;
	std::cout << "How many times he/she was in class he/she : " << std::endl;
	std::cin >> attendance;
	std::cout << std::endl<< CheckIfPassed(midtermExam, activity, finalExam, totalHours, attendance) << std::endl;
	system("pause");
	return 0;
}
