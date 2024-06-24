#include<iostream>
using namespace std;

int main(){
    cout<<"Execution start ..."<<endl;
    //int a = 200,b=0,c;
    int a,b,c;
    cout<<"Enter Two Integer Numbers: "<<endl;
    cin>>a>>b;

    try{
        if(b==0){
            throw b;
        }
        c = a/b;
        cout<<"Result = "<<c<<endl;
    }
    catch(int x){
        cout<<"Denominator cannot be "<<x<<" for division!"<<endl;
    }
    cout<<"Execution Ended..."<<endl;
    return 0;
}