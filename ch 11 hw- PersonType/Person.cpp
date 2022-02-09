#include "Person.h"

Person::Person() {
	for (int i = 0; i < 3;i++) name[i] = "";
}
void Person::setName(string newName, int index) {
	name[index] = newName;
}
void Person::InputAllNames() {
	string newName;
	cout << "   First Name:";
	cin >> newName;
	setName(newName, 0);
	cout << "   Middle Name:";
	cin >> newName;
	setName(newName, 1);
	cout << "   Last Name:";
	cin >> newName;
	setName(newName, 2);
}
string Person::returnName(int index)const {
	return name[index];
}
bool Person::checkoneEqual(const Person& otherPerson, int index)const {
	if (name[index] == otherPerson.returnName(index)) {
		return true;
	}
	return false;
}
int Person::checkallEqual(const Person& otherPerson)const {
	int numbSameNames = 0;
	for (int i = 0;i < 3;i++) {
		if (name[i] == otherPerson.returnName(i)) {
			numbSameNames++;
		}
	}
	return numbSameNames;

}