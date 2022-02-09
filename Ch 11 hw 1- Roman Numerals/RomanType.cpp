#include "RomanType.h"


RomanType::RomanType(string num) {
    Numeral = num;
    Decimal = 0;
    isValid = true;
    convertToDecimal();

}
int RomanType::convertToValue(char ch) {
    switch (ch)
    {
    case 'M':
        return 1000;
    case 'D':
        return 500;
    case 'C':
        return 100;
    case 'L':
        return 50;
    case 'X':
        return 10;
    case 'V':
        return 5;
    case 'I':
        return 1;
    default:
        isValid = false;
        return 0;
        break;
    }
}
void RomanType::convertToDecimal() {
    int subtrAmnt = 0;

    for (int i = 0;i < static_cast<int>(Numeral.length());i++) {
        int nextValue = convertToValue(toupper(Numeral[i]));
        if (i < static_cast<int>(Numeral.length()) - 1 && nextValue < convertToValue(toupper(Numeral[i + 1]))) {
            subtrAmnt = nextValue;
        }
        else {
            Decimal += nextValue - subtrAmnt;
            subtrAmnt = 0;
        }
    }
}
int RomanType::returnDecimal() {
    return Decimal;
}
string RomanType::returnNumeral() {
    return Numeral;
}