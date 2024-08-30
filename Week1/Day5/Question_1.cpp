#include<iostream>
using namespace std;
void checkevenodd(int n){
if(n&1){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkevenodd(n);
}