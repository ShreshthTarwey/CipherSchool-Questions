#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout<<"Value using variable: "<<a<<" Value using pointer: "<<*ptr<<" Value using double pointer: "<<**ptr2;
}