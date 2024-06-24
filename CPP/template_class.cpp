#include<iostream>
#include<string>

using namespace std;

template <class xyz> // common Template Declaration

class ABC{
    xyz a,b;
    public:
    ABC ( xyz p1,xyz p2){
        a = p1;
        b = p2;
        cout<<"First value = "<<p1<<endl<<"Second Value = "<<p2<<endl;
        cout<<"Actual First Value = "<<a<<endl<<"Actual Second Value = "<<b<<endl;
            }
};

int main(){
    ABC <int> obj1(12,30);
    ABC <float> obj2(13.1321,21.3214);
    ABC <char> obj3('A', 'Z');
    ABC <string> obj4("Ramu","Shamu");
    ABC <double> obj5(12.12345,11.12353);
    return 0;
}