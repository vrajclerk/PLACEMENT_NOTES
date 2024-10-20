#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    p = &a;
    // cout << "Address of a: " << &a << endl;
    // cout << "Value of a: " << a << endl;
    // cout << "Value of a using pointer: " << *p << endl;
    // cout << "Address of a using pointer: " << p << endl;
    // cout << "Address of pointer: " << &p << endl;

    *p=20;
    cout << "Value of a: " << a << endl;


    int arr[]={10,20,30};
    
    cout<<*arr<<endl;//10

    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
 return 0;
}