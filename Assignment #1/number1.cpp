/*
* number1.cpp
* Name: [Oyem John Chukwuyenum]
* Department: [Computer Science]
* Matric No: [47037890IH]
* A Program that reads an integer and determines and prints if its even or odd 
*
* Stub file to enable you complete assignment#1-question#1
*/
#include <iostream>
using namespace std;
int main ()
{
	int number1;
	
	std:: cout << "Welcome!     This Program Reads An Integer" <<endl; 
	std:: cout << "and Determines and prints if its Even or Odd" <<endl;
	std:: cout << "" << endl;
	std:: cout << "Enter Integer : ";
	std:: cin >> number1;
	
	int number2 = number1 / 2;
	
	if (number1 % 2 == 0)
	std:: cout << " It Is An Even Number";
	
	else
	std:: cout << " It Is An Odd Number";
	return 0;
	
	
}
