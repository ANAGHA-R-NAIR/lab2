#include<iostream>
#include<cmath>
using namespace std;
main(){
double a, b, c, d, e, f;
cout<<"Principle amount=";
cin>>a;
cout<<"Rate of interest per year(%)=";
cin>>b;
cout<<"Time(years)=";
cin>>c;
d= pow(1+b, c);
e=a*d;
f=e-a;
cout<<"Interest="<<f;
cout<<"Sum to be paid="<<e;
}
