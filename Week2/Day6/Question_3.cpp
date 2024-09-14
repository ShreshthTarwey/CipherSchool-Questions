#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int num_odd=0;
    int num_even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]&1){
            num_odd++;
        }
        else{
            num_even++;
        }
    }
    cout<<"Number of odd numbers: "<<num_odd<<endl;
    cout<<"Number of even numbers: "<<num_even;
}