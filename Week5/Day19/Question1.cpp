#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("test.txt");
    fout<<"The name is: Shreshth Tarwey"<<endl;
    fout<<"The age is: 20"<<endl;
    fout.close();
    ifstream fin;
    fin.open("test.txt");
    string line;
    while(getline(fin,line)){
        cout<<line;
        cout<<endl;
    }
    fin.close();
}