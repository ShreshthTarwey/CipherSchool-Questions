#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your score: ";
    cin>>n;
    char result;
    if(n>=90 && n<=100){
        result = 'A';
    }
    else if(n>=80 && n<=89){
        result = 'B';
    }
    else if(n>=70 && n<=79){
        result = 'C';
    }
    else if(n>=60 && n<=69){
        result = 'D';
    }
    else if(n>=0 && n<=59){
        result = 'F';
    }
    cout<<"Grade: "<<result;
}