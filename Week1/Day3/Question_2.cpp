#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int result=1;
    for(int i=1;i<=a;i++){
        result*=i;
    }
    if(a==0){
    cout<<"The factorial of 4 is: "<<1;
    }
    else{
    cout<<"The factorial of 4 is: "<<result;}
    
}