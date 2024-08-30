#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int result=0;
    for(int i=1;i<=a;i++){
        result+=i;
    }
    cout<<"The sum of the first 5 natural numbers is: "<<result;
    
}