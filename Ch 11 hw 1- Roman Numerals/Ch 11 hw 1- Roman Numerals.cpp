

#include <iostream>
#include <string>
#include<cstdlib>
#include "RomanType.h"

using namespace std;

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
