#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base Constructor Called"<<endl;
    }
    ~Base(){
        cout<<"Base Destructor Called"<<endl;
    }
};

class Derived{
    public:
    Derived(){
        cout<<"Derived Constructor called"<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor called"<<endl;
    }
};
int main(){
    Base bobj;
    Derived dobj;
    //  Base *bptr = NULL;
    //  delete bptr;
    // Derived *dptr = NULL;
    // delete dptr;
    //Base *bptr = new Base();
    
   // Base *bptr = new Derived(); // Not possible
    //Derived *dptr = new Base(); // Not possible
     // Derived *dptr = new Derived();
    //delete bptr;
     // delete dptr;
    //  delete bptr;
    return 0;

}