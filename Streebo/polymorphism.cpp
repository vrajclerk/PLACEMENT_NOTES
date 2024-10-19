#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;

    //non-parameterized
    Student(){
        cout<<"non parameterized constructor";
    }
    //parameterized
    Student(string name){
        this->name=name;
        cout<<"parameterized constructor";
    }
};
//run-time polymorphism
class Parent{
public:
    getInfo(){
        cout<<"I am parent";
    }
};
class Child: public Parent{
public:
    getInfo(){
        cout<<"I am child";
    }
};
int main(){
    Student s1("vraj"); //compile time polymorphism
    
    Child c1;
    c1.getInfo(); //run-time polymorphism
    
    return 0;
}