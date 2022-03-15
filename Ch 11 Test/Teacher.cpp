#include "Teacher.h"

Teacher::Teacher() :trimester1(), trimester2(),trimester3() {
}
Teacher::~Teacher() {}

void Teacher::inputTrimesterInfo() {
	string t1,t2,t3,f,l;
	int id;
	cout << "First Trimester Name:";
	getline(cin,t1);
	cout << "Second Trimester Name:";
	getline(cin, t2);
	cout << "Third Trimester Name:";
	getline(cin, t3);
	cout << "Student's First Name:";
	cin >> f;
	cout << "Student's Last Name:";
	cin >> l;
	cout << "Student's ID:";
	cin >> id;

	trimester1.setTrimesterName(t1);
	trimester2.setTrimesterName(t2);
	trimester3.setTrimesterName(t3);

	trimester1.SetNewName(f, l, id);
	trimester2.SetNewName(f, l, id);
	trimester3.SetNewName(f, l, id);

}

void Teacher::printTrimesterInfo() {
	trimester1.printResults();
	trimester2.printResults();
	trimester3.printResults();

}