#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> list_new = {10,20,30,40,50};
    list<int>::iterator itr;
    for(itr=list_new.begin();itr!=list_new.end();++itr){
        cout<<*itr<<endl;
    }
    //list_new.push_front(100);
   // list_new.push_back(200);
    list_new.pop_front();
    list_new.pop_back();

    cout<<"After Data Manipulation in List : "<<endl;

    for(itr=list_new.begin();itr!=list_new.end();++itr){
        cout<<*itr<<endl;
    }

    return 0;
}