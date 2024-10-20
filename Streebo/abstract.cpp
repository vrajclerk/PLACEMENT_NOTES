#include<iostream>
#include<string>
using namespace std;

//abstract
class Shape{
    virtual void draw()=0; //pure virtual function: 
};
class Circle : public Shape {
public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};
int main()
{
    Circle c1;
    c1.draw();
    /* code */
    return 0;
}
