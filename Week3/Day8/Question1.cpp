// Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.
// Sample Input:- str1 = "Hello, World!"
// Output:- 13
#include<iostream>
#include<string>
using namespace std;
int stringLength(const string &s){
    return s.length();
}
int main(){
    string s;
    getline(cin,s);
    cout<<stringLength(s);
}