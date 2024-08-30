#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Multiplication of: "<<a<<endl;
    for(int i=1;i<=10;i++){
        cout<<a<<" x"<<" "<<i<<" = "<<a*i<<endl;
    }
}