// ch 11 hw- PersonType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<iomanip>
#include "Person.h"
using namespace std;



int main()
{
	Person person1;
	Person person2;

	cout << "Name stuff whooo!!!" << endl;

	cout << "Person 1:" << endl;
	person1.InputAllNames();

	cout << "Person 2:" << endl;
	person2.InputAllNames();

	if (person1.checkoneEqual(person2, 0)) {//if have the same first name:
		cout << "Person 1 and Person 2 have the same FIRST name!" << endl;
	}
	if (person1.checkoneEqual(person2, 1)) {//if have the same middle name:
		cout << "Person 1 and Person 2 have the same MIDDLE name!" << endl;
	}
	if (person1.checkoneEqual(person2, 2)) {//if have the same last name:
		cout << "Person 1 and Person 2 have the same LAST name!" << endl;
	}
	if (person1.checkallEqual(person2)==3) {
		cout << "Person 1 and Person 2 have EXACTLY the same name!";
	}
	else if (person1.checkallEqual(person2) <1) {
		cout << "Person 1 and Person 2 do not share a common First, Middle, or Last name." << endl<<endl;
	}
	return 0;
}
