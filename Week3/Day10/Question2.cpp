#include<iostream>
#include<string.h>
using namespace std;
bool isPalindrome(const string s){
    string result = "";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            result+=s[i];
        }
        else if((s[i]>='A' && s[i]<='Z')){
            result+=s[i]+32;
        }
    }
    string rev ="";
    for(int i=result.length()-1;i>=0;i--){
        rev+=result[i];
    }
    if(result == rev){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
}