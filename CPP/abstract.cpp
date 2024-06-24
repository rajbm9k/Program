#include<iostream>
using namespace std;

class Abstract{ // abstract class
    public:
    virtual void display(void) = 0; //pure virtual function
    void show(void){
        cout<<"Base show is called"<<endl;
    }
};

class Derived : public Abstract{
    public:
    void display(void){
        cout<<"Display of derived class is called"<<endl;
    }
};

int main(){
    //Abstract obj2; Object of Abstract class cannot be created.
    Abstract *bptr = new Derived(); 
    bptr->show();
    Derived obj; // object of derived class of abstract class is possible
    obj.display();
    return 0;
}