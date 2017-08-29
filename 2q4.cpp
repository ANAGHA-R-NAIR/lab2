#include<iostream>
using namespace std;
main(){
int a, b, c, d;
cout<<"Enter number of days=";
cin>>a;
b=a/365;
c=(a%365)/7;
d=(a%365)%7;
cout<<"Number of years="<<b;
cout<<", Number of weeks="<<c;
cout<<", Number of days="<<d;
}
