/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        OYEM, JOHN CHUKWUYENUM
 * Matric No:   47037890IH
 * Department:  COMPUTER SCIENCE
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string firstName, string lastName, string gender, int month, int day, int year, int weight, double height, int currentDay, int currentMonth, int currentYear ); // constructor that initializes patient information

    string getFirstName();          //  function that gets the first name
    void setFirstName( string firstName );      //  function that sets the first name

    string getLastName();          //  function that gets the last name
    void setLastName( string lastName );      //  function that sets the last name

    string getGender();          //  function that gets the gender
    void setGender( string gender );      //  function that sets the gender

    int getMonth();          //  function that gets the month
    void setMonth( int month );      //  function that sets the month

    int getDay();          //  function that gets the day
    void setDay( int day );      //  function that sets the day

    int getYear();          //  function that gets the year
    void setYear( int year );      //  function that sets the year

    int getWeight();          //  function that gets the weight
    void setWeight( int weight );      //  function that sets the weight

    double getHeight();          //  function that gets the height
    void setHeight( double height );      //  function that sets the height


    int setAge( int currentDay, int currentMonth, int currentYear);        //  function that sets the age
    int getAge();       // function to get patients age in years


    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate

    int getInformation();          // function to print object information

    // TODO: Provide get and set function prototypes of each class attribute
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has already been provided


    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age

}; // end class HealthProfile

