#include <iostream>
#include <string>
#include<cstdlib>
#include "Student.h"
using namespace std;

bool requestRepeat();

int main()
{
    
    cout << "Student Random Homework Grade Generator" << endl << endl;

    string firstName, lastName;
    int studentID;

    cout << "Student's First Name: ";
    cin >> firstName;
    cout << "Student's Last Name: ";
    cin >> lastName;
    cout << "Student's ID #: ";
    cin >> studentID;

    Student student(firstName, lastName, studentID);
    
    bool generateAgain = true;

    while (generateAgain) {
        student.CalculateNewGrade();

       generateAgain= requestRepeat();
    }
    return 0;
}

bool requestRepeat() {
     cout << "Generate New Grade? (Y/N):";
    char choice;
    cin >> choice;
    switch (toupper(choice))
    {
    case'N':
        return false;
        break;
    case 'Y':
        return true;
        break;
    default:
        cout << "Please enter Y or N!" << endl;
        requestRepeat();
        break;
    }
    return false;

}