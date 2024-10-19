#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    //properties/attributes
    string name;
    string dept;
    string subject;
    //non-parameterized constructor
    Teacher(){
        //Initialisation= By default setting values of some properties
        cout<<"Teacher object created"<<endl;
        dept="IT";

    }
    //parameterized constructor
    Teacher( string n,string d,string s,double salary){
        name=n;
        dept=d;
        subject=s;
        salary=salary;

    }
    //Copy Constructor
    Teacher(Teacher &t){
        cout<<"I am custom copy construtor";
        this->name=t.name;
        this->dept=t.dept;
        this->subject=t.subject;
        this->salary=t.salary;
    }
    
    
    //methods/member function
    void changedept(string newDept){
        dept= newDept;
    }
    //encapsulation: Wraping up of data & members in a single unit,so that private members can't be accessed outside the classs directly
    //functions to modify  private properties :setter
    void setSalary(double s){
        salary=s;
    }
    //functions to  display private properties :getter
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    
};//Encapsulation
class Account{
private:
    double balance;
    string password; //data hiding
public:
    string accountid;
    string username;
};

int main()
{
    // Teacher t1; //constructor call
    // t1.name="Vraj";
    
    // t1.subject="OOPS";
    // t1.setSalary(50000);
    // cout<<t1.name<<endl;
    // cout<<t1.dept<<endl;

    Teacher t1("Ellyse","Sports","Cricket", 15000);
    t1.getInfo();
    
    Teacher t2(t1); //Default Copy Constructor -invoke
    t2.getInfo();

    cout<<t1.getSalary()<<endl;
    return 0;   
}