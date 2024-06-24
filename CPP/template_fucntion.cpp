#include<iostream>
using namespace std;

template <class xyz> // common template declaration
void func(xyz f1){
    cout<<"Value is "<<f1<<endl;
} 

int main(){
    func('A');
    func(200);
    func("some dummy text");
    func(10.12321);
    return 0;
}