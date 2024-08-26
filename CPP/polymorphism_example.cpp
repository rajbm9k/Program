#include<iostream>
using namespace std;
class Base{

private:
virtual void method(){
    cout<< "from base"<<endl;
}
public:
virtual ~Base(){
    method();
}

void baseMethod(){
    method();
}
};

class A: public Base{
    void method(){
        cout<<"From A"<<endl;
    }
public :
~A(){
    method();
}
void baseMethod(){
    method();
}
};

int main(){
    Base * base = new A;
    base->baseMethod();
    delete base;
    return 0;

}
// From A
// From A
// from base