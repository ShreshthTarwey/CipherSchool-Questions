#include<iostream>
using namespace std;
bool find(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>> target;
    if(find(arr,n,target)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}