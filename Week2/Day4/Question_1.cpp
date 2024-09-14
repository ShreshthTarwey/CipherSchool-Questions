#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    double k=static_cast<double>(a)/b;
    cout<<"Division: "<<k<<endl;
    cout<<"Modulus: "<<a%b;
}