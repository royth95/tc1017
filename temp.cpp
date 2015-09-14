#include <iostream>
using namespace std;

int main () {
int F,C;
cout << "put the temperature in Fahrenheit" << endl;
cin >> F;
C=5*(F-32)/9;
cout << "A temperature of " << F << " degrees Fahrenheit is " << C <<  " in Celsius " << endl;
if (C >= 100)
  {
    cout << "The water will boil at this conditions" << endl;
  }
  else
  {
    cout << "the Water does not boil at this temperature" << endl;
  }
return 0;
}
