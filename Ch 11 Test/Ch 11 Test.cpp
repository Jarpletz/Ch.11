#include <iostream>
#include <string>
#include<cstdlib>
#include "Student.h"
#include "Trimester.h"
#include "Teacher.h"
using namespace std;

bool requestRepeat();

int main()
{
    
    cout << "Student Random Homework Grade Generator" << endl << endl;

    Teacher teacher;

    teacher.inputTrimesterInfo();

    bool generateAgain = true;
    while (generateAgain) {
        teacher.printTrimesterInfo();

       generateAgain= requestRepeat();
    }
    return 0;
}

bool requestRepeat() {
     cout << "Generate New Grades? (Y/N):";
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