#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("test.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}