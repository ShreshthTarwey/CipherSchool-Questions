#include<iostream>
using namespace std;
int main(){
    string a;
    string b;
    cout<<"Enter the first string: ";
    getline(cin,a);
    cout<<"Enter your second string: ";
    getline(cin,b);
    string result = a+b;
    cout<<"Concatenated string: "<<result;
}