#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    int result;
    if(a>b){
        if(a>c){
            result=a;
        }
        else{
            result=c;
        }
    }
    else if(b>c){
        if(b>a){
            result=b;
        }
        else{
            result=a;
        }
    }
    else{
        result = c;
    }
    cout<<"The largest number is: "<<result;
}