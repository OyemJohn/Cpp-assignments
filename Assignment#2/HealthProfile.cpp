/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        OYEM, JOHN CHUKWUYENUM
 * Matric No:   47037890IH
 * Department:  COMPUTER SCIENCE
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName( firstName );      // call set function to initialize firstName
    setLastName( lastName );        // call set function to initialize lastName
    setGender( gender );            // call set function to initialize gender
    setMonth( month );              // call set function to initialize month
    setDay( day );                  // call set function to initialize day
    setYear( year );                // call set function to initialize year
    setWeight( weight );            // call set function to initialize weight
    setHeight( height );            // call set function to initialize height
    setAge( currentDay, currentMonth, currentYear);  // call set function to calculate age
}

// function to print object information
int HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "First Name: " << setw(17) << getFirstName() << endl;
    cout << "Last Name: " << setw(19) << getLastName() << endl;
    cout << "Gender: " << setw(20) << getGender() << endl;
    cout << "Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << "Height (in meters): " << setw(10) << getHeight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obese:         30 or greater" << endl;
}

// TODO: Provide implementaion details for functions in HealthProfileStub.h

void HealthProfile::setFirstName(string fN)
{
	firstName = fN;
}

string HealthProfile::getFirstName()
{
	return firstName;
}

void HealthProfile::setLastName(string lN)
{
	lastName = lN;
}

string HealthProfile::getLastName()
{
	return lastName;
}

void HealthProfile::setGender(string sex)
{
	// print user's gender
	if(sex == "M" || sex == "m"){
		gender = "MALE";
	}
	else if(sex == "F" || sex == "f"){
		gender = "FEMALE";
	}
	else{
		gender = "N/A";
	}
}

string HealthProfile::getGender()
{
	return gender;
}

void HealthProfile::setMonth(int MNTH)
{
	month = MNTH;
}

int HealthProfile::getMonth()
{
	return month;
}

void HealthProfile::setDay(int DD)
{
	day = DD;
}

int HealthProfile::getDay()
{
	return day;
}

void HealthProfile::setYear(int YY)
{
	year = YY;
}

int HealthProfile::getYear()
{
	return year;
}

void HealthProfile::setHeight(double HH)
{
	height = HH;
}

double HealthProfile::getHeight()
{
	return height;
}

void HealthProfile::setWeight(int WW)
{
	weight = WW;
}

int HealthProfile::getWeight()
{
	return weight;
}


int HealthProfile::setAge(int ccMonth, int ccDay, int ccYear)
{
	int offset = 0;

	// decide if the birthday IN CURRENT year has passed
	if (getMonth() > ccMonth) offset = -1;
	if ((getMonth() == ccMonth) && (getDay() > ccDay)) offset  = -1;
	age = (ccYear - getYear() + offset);
}

int HealthProfile::getAge()
{
	return age;
}


int HealthProfile::getMaximumHeartRate()
{
	return (220 - getAge());
}

double HealthProfile::getTargetHeartRate()
{
	int max;
	max = getMaximumHeartRate();

	double rate1, rate2;

	rate1 = max * 50 / 100;
	rate2 = max * 85 / 100;
	return (rate1-rate2);
}

double HealthProfile::getBMI()
{
	return (weight / (height * height));
}

// Implementation for the constructor and getInformation function has already been provided




/*
	Date:		SUN 7th June, 2015
	IDE:		Dev-C++ 5.11
	Compiler:	
	Platform:	Windows (7 Ultimate, AMD64)
*/


