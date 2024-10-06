#include<iostream>
#include<string>
#include<tuple>
using namespace std;
class Person{
    int age;
    string fname;
    string lname;
    public:
    Person(string s1, string s2, int k):age(k),fname(s1),lname(s2) {}
    void getFullname(){
        cout<<"The full name is: "<<fname+" "+lname<<endl;
    }
    tuple<string,string,int> getFulldetails(){
        return make_tuple(fname,lname,age);
    }
};
int main(){
    Person obj("Shreshth","Tarwey",20);
    obj.getFullname();
    string fname,lname;
    int age;
    tie(fname,lname,age) = obj.getFulldetails();
    cout<<"The first name is: "<<fname<<" ,Last name is: "<<lname<<" the age is: "<<age<<endl;
}