#include<iostream>
using namespace std;

class ABC{
    int *iptr;

    public:
        ABC(){};

        ABC(int a){
            iptr = new int();
            *iptr = a;
            }

        ABC(const ABC &obj){
            iptr = new int;
            *iptr = *obj.iptr;
        }
        void display(){
            cout<<"value of *iptr = "<<*(iptr)<<endl;    
            cout<<"value of iptr = "<<iptr<<endl;
        }
        void change(int b){
            *iptr= b;
        }

};

int main(){
    ABC obj1(30);
    obj1.display();
    ABC obj2 = obj1; // copy constructor is called ( and deep copy takes place)
    obj2.display();
    cout<<"After changing value: "<<endl;
    obj1.change(50);  // value of one is changed but not reflecting on other.
    obj1.display();
    obj2.display();
    return 0;
}