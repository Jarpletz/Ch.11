#include "Student.h"

// Constructors
Student ::Student() {
	first = " ";
	last = " ";
	id = 0;
	result = " ";
	numbForgot = 0;
	numbIncomplete = 0;
	numbComplete = 0;
}
Student::Student(string firstName, string lastName, int ID) {
	first = firstName;
	last = lastName;
	id = ID;
	result = " ";
	numbForgot = 0;
	numbIncomplete = 0;
	numbComplete = 0;
}
//Destructor- Do I need this to do anything?
Student:: ~Student() {}

void Student::OuputGrade() const {
	if (result == "Forgot") {
		cout << first << " " << last << " (ID # " << id << ")" << "Did NOT do their Homework!" << endl;
		cout << "They have " << numbForgot << " forgotten assignments, " << numbIncomplete << " incomplete assignments, and " << numbComplete << " completed assignments." << endl << endl;
		return;
	}
	if (result == "Incomplete") {
		cout << first << " " << last << " (ID # " << id << ")" << "Left their Homework Incomplete!" << endl << endl;
		return;
	}
	if (result == "Complete") {
		cout << first << " " << last << " (ID # " << id << ")" << "FINISHED their Homework!"<<endl<<endl;
		return;
	}
}

void Student::CalculateNewGrade() {
	double newGrade = sin(rand());

	if (newGrade < -0.5f) {
		result = "Forgot";
		numbForgot++;
	}
	else if (newGrade >= -0.5f && newGrade < 0.5f) {
		result = "Incomplete";
		numbIncomplete++;
	}
	else {
		result = "Complete";
		numbComplete++;
	}
	OuputGrade();
}

