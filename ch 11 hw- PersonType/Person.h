#pragma once
#ifndef Person_H
#define Person_H

#include<string>
#include<iostream>
using namespace std;

class Person
{
public:

	void setName(string, int);
	//sets a single name = the string inputted, according to the inputted index.
	void InputAllNames();
	//Requests and sets the Person's first middle, and last names using the consul and setName().
	string returnName(int) const;
	//Returns the name of the input index as a string.
	bool checkoneEqual(const Person&, int)const;
	//Compare's the object's name at the inputted index to that of the inputted Person. Returns true if same, false if diffrent.
	int checkallEqual(const Person&)const;
	//Returns the number of identical names the object shares with the inputted Person. Range: 0-3.
	Person();
private:
	string name[3];//Array that stores the Persons names. Index 0=first name, 1=middle name, 2= last name.
};

#endif //Person_H