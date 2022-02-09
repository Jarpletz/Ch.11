#pragma once
#ifndef RomanType_H
#define RomanType_H


#include<iostream>
#include<string>
using namespace std;

class RomanType
{
public:
    void convertToDecimal();
    int returnDecimal();
    string returnNumeral();
    bool isValid;
    RomanType(string);


private:
    string Numeral;
    float Decimal;
    int convertToValue(char);
};

#endif // !RomanType_H
