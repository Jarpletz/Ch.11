#pragma once
#ifndef TRIMESTER_H
#define TRIMESTER_H
#endif // !TRIMESTER_H

#include "Student.h"
#include <iomanip>

class Trimester :
    public Student
{
public:
    void CalculateNewGrade();
    string getTrimesterName() const;
    void setTrimesterName(string);
    void printResults() ;

    Trimester();
    Trimester(string, string, int, string);
    ~Trimester();
    
private:
    string trimesterName;

};

/*
------Trimester--------

- trimesterName string

------
+ CalculateNewGrade() void
+ getTrimesterName() void const
+ setTrimesterName(string) void
+ printResults() void

+ Trimester()
+ Trimester(string, string, int, string)
+ ~Trimester()

--------------------
*/