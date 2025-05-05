#include<iostream>
using namespace std;

class ABC{
    int *iptr;

    public:
        ABC(){}; // default constructor

        ABC(int a){    // parameterized constructor
            iptr = new int();
            *iptr = a;
            }

        ABC(const ABC &obj){ // Copy Constructor
         //   iptr = new int; // this line is purposefully commented in shallow copy.
            iptr = obj.iptr;
        }
        void display(){
            cout<<"value of *iptr = "<<*(iptr)<<endl;    
            cout<<"value of iptr = "<<iptr<<endl;
        }
        void change(int b){
            *iptr= b;
        }

        void operator+(ABC &obj);
};

int main(){
    ABC obj1(30);
    obj1.display();
    ABC obj2 = obj1; // copy constructor is called ( shallow or default copy takes place)
    obj2.display();
    cout<<"After changing value: "<<endl;
    obj1.change(50);  // value of one is changed and even same is reflecting on other.
    obj1.display();
    obj2.display();
    return 0;
}

