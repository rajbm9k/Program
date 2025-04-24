#include<iostream>
using namespace std;

class Base{
    public:
 //   void show(void){
    virtual void show(void){
        cout<<"Show of Base class"<<endl;
    }
};


class Derived : public Base{
    public:
  //  virtual void show(void){
    void show(void){    // virtual keyword is not mandatory in derived class
        cout<<"Show of Derived class"<<endl;
    }
};

int main(){
    Base bobj;
    Derived dobj;
    Base *bptr = NULL;
    Derived *dptr = NULL;
    bptr = &bobj;
    bptr->show();
    bptr = &dobj;
    bptr->show();
// just to check
    // dptr = &bobj;
    // dptr->show();
    // dptr = &dobj;
    // dptr->show();

    return 0;
}
