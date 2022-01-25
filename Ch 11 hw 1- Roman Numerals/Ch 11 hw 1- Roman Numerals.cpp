

#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;

class RomanType {
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
            subtrAmnt=nextValue;
        }
        else {
            Decimal+=nextValue-subtrAmnt;
            subtrAmnt=0;
        }
    }
}
int RomanType::returnDecimal() {
    return Decimal;
}
string RomanType::returnNumeral() {
    return Numeral;
}

int main()
{
    cout << "Roman Numeral Converter"<<endl;
    ERRORPOINT1:cout << "Your Roman Numeral:";
    string romeNumeral;
    cin >> romeNumeral;

    RomanType yourNumeral(romeNumeral);
    if (!yourNumeral.isValid) {
        cout << "Error: Please input a valid Roman Numeral!" << endl;
        goto ERRORPOINT1;
    }
   
   cout << "Your Roman Numeral: " << yourNumeral.returnNumeral() << endl;
   cout << "Its Decimal Equivalent: " << yourNumeral.returnDecimal() << endl;

    return 0;
}
