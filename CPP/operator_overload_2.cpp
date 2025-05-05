#include<iostream>   //Binary overloading example
using namespace std;

class ABC{
    int real,imag;
    public:
    ABC(){
        real = 10;
        imag = 30;
    }
    ABC(int r, int i){  // parameterized constructor
        real = r;
        imag = i;
    }
    ABC operator+(ABC &obj);
    // ABC operator+(ABC &obj){   //  Binary plus operator overloading
    //     ABC temp;
    //     temp.real = real+obj.real;
    //     temp.imag = imag+obj.imag;
    //     return temp;
    // }
    void show(void);

};

ABC ABC::operator+(ABC &obj){   //  Binary plus operator overloading
    ABC temp;
    temp.real = real+obj.real;
    temp.imag = imag+obj.imag;
    return temp;
}

void ABC::show(void){
    cout<<"real = "<<real<<", imaginary = "<<imag<<endl;
    cout<<real<<"+i"<<imag<<endl;
}

int main(){
    ABC obj1,obj2(10,20),obj3;
    cout<<"Before Operator overloading"<<endl;
    obj1.show();
    obj2.show();

    obj3 = obj1 + obj2;       // Binary Operator Overloading
    cout<<"After Operator overloading"<<endl;
    obj3.show();
    return 0;
}