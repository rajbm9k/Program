#include<iostream>
using namespace std;

class Base{
    public:
    //void show(void){
    virtual void show(void){
        cout<<"Show Base class"<<endl;
    }
};


class Derived : public Base{
    public:
    virtual void show(void){
        cout<<"Show Derived class"<<endl;
    }
};

int main(){
    Base bobj;
    Derived dobj;
    Base *bptr = NULL;
    bptr = &bobj;
    bptr->show();
    bptr = &dobj;
    bptr->show();
    return 0;
}