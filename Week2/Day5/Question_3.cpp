#include<iostream>
using namespace std;
void check(string s){
    string vowels="aeiou";
    int conco=0;
    int vowel=0;
    int flag=0;
    for(int i=0;i<s.length();i++){
        flag=0;
        for(int j=0;j<vowels.length();j++){
            if(s[i]==vowels[j]){
                vowel++;
                flag=1;
            }
        }
        if(flag==0){
            conco++;
        }
    }
    cout<<"Number of vowels: "<<vowel<<endl;
    cout<<"Number of consonants: "<<conco<<endl;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    check(s);
}