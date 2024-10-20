#include<iostream>
#include<string>
using namespace std;

void func(){

    static int x=0; //instantiated once ane then increamented
    cout<<"x:"<< x <<endl;
    x++;
}
int main()
{
    func(); //0
    func();//1
    func();//2
    /* code */
    return 0;
}
