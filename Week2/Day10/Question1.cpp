#include<iostream>
#include<limits.h>
using namespace std;
int findMax(const int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[]={1,5,3,9,2};
    int n = sizeof(arr2)/sizeof(arr2[0]);
    cout<<findMax(arr2,n);
}