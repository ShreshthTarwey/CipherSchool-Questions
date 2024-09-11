#include<iostream>
using namespace std;
int main(){
    int a;
    a=10;
    int *ptr = &a;
    cout<<"Value using pointer: "<<*ptr<<" Value using variable :"<<a;
}