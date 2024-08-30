#include<iostream>
using namespace std;
void reversestring(string &s){
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[s.length()-1-i]);
    }
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    reversestring(s);
    cout<<"Reversed string: "<<s;
}