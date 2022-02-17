#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include<random>
#include<cstdlib>

using namespace std;

class Student
{
public:
	void CalculateNewGrade();
	//Calculates a Random New Homework result. Randomly Sets result equal to "Forgot", "Incomplete", or "Complete"
	//Calls OutputGrade()
	//returns void

	Student();//Default Constructor. Sets everthing to " " or 0.
	Student(string, string, int);
			//Paramerterized Constructor. 
			//Input: (string) first name, (string) last name, (int) ID.
			//Sets first, last, and id to inputs, respectively.
	~Student();//Deconstructor.
private:

	void OuputGrade() const;
	//Outputs a sentence to the consule, depending on the result found in CalculateNewGrade().
	//Returns Void

	string first;
		//the first name of the student.
	string last;
		//the last name of the student.
	int id;
		//The student's ID
	string result;
		//the students homework result. Initializes as " ", after grade is calculated is either "Forgot", "Incomplete", or "Complete".
	int numbForgot;
	int numbIncomplete;
	int numbComplete;//the number of forgotten, incomplete, and complete assignments
};
/*
* 
*____________Student_________

-string first
-string last
-int id

-string result

-int numbForgot
-int numbIncomplete
-int numbComplete
_______________________
+CalculateNewGrade()
+Student()
+Student(string,string,int)
+~Student()

-OutputGrade() const



*/


#endif // !STUDENT_H


