/*
* number6.cpp
* Name: [Oyem John Chukwuyenum]
* Department: [Computer Science]
* Matric No: [47037890IH]
* A calculator application that reads the user's weight in kilograms and height in metres, calculate and display the user's body mass index. And display an information so the user can evaluate his\her BMI
*
*Stub file to enable you complete assignment#1-question#6
*/

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
int main()
{
	std:: cout << "A calculator application that reads the user's weight in kilograms and height in metres" <<endl; 
	std:: cout << "calculate and display the user's body mass index. And display an information so the user can evaluate his\her BMI" <<endl;
	std:: cout << "" << endl;
	cout << " BMI VALUES" <<endl;
	
	cout << " Underweight: Less Than 18.5" <<endl;
	cout << " Normal:      Between 18.5 and 24.9" <<endl;
	cout << " Overweight:  Between 25 and 29.9" <<endl;
	cout << " Obese:       30 or Greater" <<endl;
	cout << " " <<endl;
	cout << " " <<endl;
	cout << " " <<endl;
	int weight;
	int height;
	int BMI;
	cout << "Enter your weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter your height(m): " <<endl;
	cin >> height;
	
	BMI = weight / height;
	
	cout << setprecision(2) << fixed << "Your BMI is: " <<BMI <<endl;
	
	if (BMI <= 18.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "Your weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;

	return 0; 	
}
