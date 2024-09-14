#include<iostream>
#include<string>
using namespace std;
int countCharacter(const string &str, char ch){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cout<<"Enter your string: ";
    getline(cin,s);
    char ch;
    cout<<"Enter your character :";
    cin>>ch;
    cout<<countCharacter(s,ch);
}