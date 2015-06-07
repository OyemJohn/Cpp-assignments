/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:         OYEM, JOHN CHUKWUYENUM
 * Matric No:    47037890IH
 * Department:   COMPUTER SCIENCE
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;

    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n" << endl;

    //	prompt for and input username
	cout << "PLEASE INPUT YOUR FIRST NAME:" << endl;
	getline(cin, firstName);	//	read username with blanks
	cout << endl; // output a blank line


	//	prompt for and input last name
	cout << "PLEASE INPUT YOUR LAST NAME:" << endl;
	getline(cin, lastName);		// read lastname with blanks
	cout << endl;	// output a blank line


	//	prompt for and input gender
	cout << "PLEASE INPUT YOUR GENDER:" << endl;
	getline(cin, gender);		// read user's gender with blanks
	cout << endl;	//	output a blank line


		//	prompt for and input date of birth
	cout << "PLEASE INPUT YOUR DATE OF BIRTH:     (In this format: MM_DD_YYYY) " << endl;
	cout << "MM:" ;
	cin >> month;


	//	prompt for and input date of birth

	cout << "DD:" ;
	cin >> day;


	//	prompt for and input date of birth

	cout << "YYYY:" ;
	cin >> year;
	cout << endl;	//	output a blank line


	//	prompt for and input height
	cout << "PLEASE INPUT YOUR HEIGHT  (In Inches)" << endl;
	cin >> height;
	cout << endl;		//	output a blank line


	//	prompt for and input weight
	cout << "PLEASE INPUT YOUR WEIGHT  (In Pounds)" << endl;
	cin >> weight;
	cout << endl;		//	output a blank line

		//	prompt for and input current day
	cout << "PLEASE INPUT TODAY'S DATE:     (In this format: DD_MM_YYYY) " << endl;
	cout << "DD:" ;
	cin >> currentDay;


	//	prompt for and input current year

	cout << "MM:" ;
	cin >> currentMonth;


	//	prompt for and input current year

	cout << "YYYY:" ;
	cin >> currentYear;
	cout << endl;	//	output a blank line

	HealthProfile user01 (firstName, lastName, gender, day, month, year, weight, height, currentDay, currentMonth, currentYear);

	cout << user01.getInformation();





    // Instantiate an object of class HealthProfile - passing relevant values to the constructor


    // Print information from the object - by calling getInformation() function

}
