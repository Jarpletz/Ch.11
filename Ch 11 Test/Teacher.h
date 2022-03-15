#pragma once
#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include "Trimester.h"

using namespace std;

class Teacher
{
public:
	void inputTrimesterInfo();
	void printTrimesterInfo();
	Teacher();
	~Teacher();
private:
		Trimester trimester1;
		Trimester trimester2;
		Trimester trimester3;
};

/*
--------Teacher--------

- trimester1 Trimester
- trimester2 Trimester
- trimester3 Trimester
------

+ inputTrimesterInfo() void
+ printTrimesterInfo() void

+ Teacher()
+ ~Teacher()

------------------------
*/


#endif // !TEACHER_H

