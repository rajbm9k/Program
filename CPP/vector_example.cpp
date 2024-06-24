#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vector_new = {10,20,30,40,50};
    vector<int>::iterator itr;
    for(itr = vector_new.begin();itr!=vector_new.end();++itr){
        cout<<*itr<<endl;
    }
    vector_new.insert(vector_new.begin()+3,0); // add after 3rd element from starting in vector
    vector_new.insert(vector_new.end(),100);
    vector_new.erase(vector_new.begin());

    cout<<"After Data Manipulation in Vector: "<<endl;

      for(itr = vector_new.begin();itr!=vector_new.end();++itr){
        cout<<*itr<<endl;
    }

}