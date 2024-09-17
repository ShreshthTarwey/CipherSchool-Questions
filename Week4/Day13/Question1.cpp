#include<iostream>
using namespace std;
int main(){
    //Creating Dynamic Variable
    int *val = new int;
    //Assign Value to it 
    *val = 42;
    cout<<"The value is: "<<*val<<endl;
    cout<<"The address of dynamic variable is: "<<val;
}