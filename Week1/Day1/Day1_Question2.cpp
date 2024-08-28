#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int sum=0;
    int num;
    for(int i=1;i<=5;i++){
        cout<<"Enter grade "<<i<<":";
        cin>>num;
        sum+=num;
    }
    float result = static_cast<float>(sum)/5;
    cout << fixed << setprecision(1);
    cout<<"The average grade is: "<<result;
}