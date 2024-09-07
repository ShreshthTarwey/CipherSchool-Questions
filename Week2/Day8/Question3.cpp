#include<iostream>
#include<string>
using namespace std;
string concatenateStrings(string &str1,string &str2){
    return str1+str2;
}
int main(){
    string str1,str2;
    cout<<"Enter your first string: ";
    getline(cin,str1);
    cout<<"Enter your second string: ";
    getline(cin,str2);
    cout<<concatenateStrings(str1,str2);
} 