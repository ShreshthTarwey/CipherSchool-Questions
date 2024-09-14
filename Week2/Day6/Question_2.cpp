#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int sum_odd=0;
    int sum_even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]&1){
            sum_odd+=arr[i];
        }
        else{
            sum_even+=arr[i];
        }
    }
    cout<<"Sum of odd numbers: "<<sum_odd<<endl;
    cout<<"Sum of even numbers: "<<sum_even;
}