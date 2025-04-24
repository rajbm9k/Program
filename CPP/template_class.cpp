#include<iostream>
//#include<string>

using namespace std;

template <class xyz> // common Template Declaration

class ABC{
    xyz a,b;
    public:
    ABC ( xyz p1,xyz p2){
        a = p1;
        b = p2;
        cout<<"First paramter value = "<<p1<<endl<<"Second parameter Value = "<<p2<<endl;
        cout<<"First paramter of class ABC, a = "<<a<<endl<<"Second paramter of class ABC, b = "<<b<<endl;
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