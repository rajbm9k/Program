#include<iostream>   //unary overloading example
using namespace std;

class ABC{
    int a,b,c;
    public:
    ABC(){
        a = 10;
        b = - 20;
        c = 30;
    }
    ABC operator-(void){   // unary minux operator overloading
        ABC temp;
        temp.a = -(a);
        temp.b = -(b);
        temp.c = -(c);
        return temp;
    }
    void show(void);

};

void ABC::show(void){
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
}

int main(){
    ABC obj1,obj2;
    cout<<"Before Operator overloading"<<endl;
    obj2.show();

    obj2=-(obj1);      // unary operator overloading
    cout<<"After Operator overloading"<<endl;
    obj2.show();
    return 0;
}