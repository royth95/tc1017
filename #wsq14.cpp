#include <iostream>
#include <cmath>
using namespace std;

double factorial(double a){
double counter, acum= 1.0;
for(counter=2.0; counter<=a; counter++){
acum=acum*counter;
}
return acum;
}
double calculate_e(int precision){
double e=0.0, prev, v;
for(double n=0.0; n<=precision; n++){
prev=e;
e=e +(1.0/factorial(n));
cout<< e << endl;
cout<<endl;
if(prev== e){
break;
}

}
v*=pow(10, precision);
v=floor(v);
v/=pow(10, precision);
return e;
}

int main(){
int precision;
cout<<"introduce the precision"<< endl;
cin>> precision;
cout<< calculate_e(precision);
return 0;
}
