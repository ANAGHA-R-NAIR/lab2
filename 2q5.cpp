#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a, b, c;
cout<<"Enter base=";
cin>>a;
cout<<"Enter exponent=";
cin>>b;
c = pow(a, b);
cout<<a<<"^"<<b<<"="<<c;
}
