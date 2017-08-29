#include<iostream>
using namespace std;
main(){
double a, b, c, d, e;
cout<<"Principle amount=";
cin>>a;
cout<<"Rate of interest per year(%)=";
cin>>b;
cout<<"Time(years)=";
cin>>c;
d=a*b*c;
e=a+d;
cout<<"Interest="<<d;
cout<<", Sum to be paid="<<e;
}
