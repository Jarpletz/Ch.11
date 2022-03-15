#include "Trimester.h"

Trimester::Trimester() :Student() {
	trimesterName = "Trimester 1";
}
Trimester::Trimester(string firstName, string lastName, int ID, string triName) : Student(firstName, lastName, ID) {
	setTrimesterName(triName);
}
Trimester::~Trimester() {
}

string Trimester::getTrimesterName() const {
	return trimesterName;
}
void Trimester::setTrimesterName(string name) {
	trimesterName = name;
}

void Trimester:: CalculateNewGrade() {
	numbComplete = 0;
	numbForgot = 0;
	numbIncomplete = 0;
	for (int i = 0;i < 5;i++) {
		double newGrade = sin(rand());
		if (newGrade < -0.5f) {
			numbForgot++;
		}
		else if (newGrade >= -0.5f && newGrade < 0.5f) {
			numbIncomplete++;
		}
		else {
			numbComplete++;
		}
	}
}
void Trimester::printResults() {
	CalculateNewGrade();
	cout << endl;
	cout << trimesterName << " results:" << endl;
	cout << "STUDENT:" << first << " " << last << " -- ID No. " << id << endl;
	cout << right << setw(20) << "Completed Assignments:  " << numbComplete << endl;
	cout << right << setw(20) << "Incomplete Assignments: " << numbIncomplete << endl;
	cout << right << setw(20) << "Forgotten Assignments:  " << numbForgot << endl;
	cout << endl;
	return;
}