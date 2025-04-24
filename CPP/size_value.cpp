#include<iostream>
using namespace std;

int main(){
    char c='R';
    int i=10;
    float f=10.2;
    double d=10.2;
    long double ld=10.2;
    cout<<"Size of char w.r.t 64-bit system is "<<sizeof(c)<<endl;
    cout<<"Size of int w.r.t 64-bit system is "<<sizeof(i)<<endl;
    cout<<"Size of float w.r.t 64-bit system is "<<sizeof(f)<<endl;
    cout<<"Size of double w.r.t 64-bit system is "<<sizeof(d)<<endl;
    cout<<"Size of \"long double\" w.r.t 64-bit system is "<<sizeof(ld)<<endl;
    return 0;
}