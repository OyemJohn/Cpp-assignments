/*
* number1.cpp
* Name: [Oyem John Chukwuyenum]
* Department: [Computer Science]
* Matric No: [47037890IH]
* A Program that reads two integers and determines if the first is a multiple of the second 
*
*Stub file to enable you complete assignment#1-question#1
*/

#include <iostream>

using namespace std;
int main ()
{
	std:: cout << "A Program that reads two integers" <<endl; 
	std:: cout << "and determines if the first is a multiple of the second" <<endl;
	std:: cout << "" << endl;
	int number1;
	int number2;
	int number3;
	
	std:: cout << "ENTER FIRST INTEGER:";
	std:: cin >> number1;
	
	std:: cout << "ENTER SECOND INTEGER:";
	std:: cin >> number2;
	
	number3 = number1 / number2;
	if (number1 % number2 == 0)
	std:: cout << number1 << " is a multiple of " << number2;
	
	else
	std:: cout << number1 << " is not a multiple of " << number2;
	return 0;
}
