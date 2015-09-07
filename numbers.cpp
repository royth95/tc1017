#include <iostream>
using namespace std;

int main () {
int x , y, add, subs, multy;
float div;

cout << "enter two numbers\n" << endl;
std::cin >> x;
std::cin >> y;

add= x+y;

subs= x-y;

multy= x * y;

div = x/(float) y;

cout << ("x+y=\n", add) << endl;
cout << ("difference=%d\n", subs) <<endl;
cout << ("multiplication=%d\n", multy) <<endl;
cout << ("division=%,2f\n", div) <<endl;
return 0;
}
