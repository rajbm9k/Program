#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

mutex mtx;
condition_variable cond;
int count = 0;

void Print_Odd(){
    for( ; count < 10; ){
        unique_lock<mutex> lock_var(mtx);
        cond.wait(lock_var,[](){return(count%2 == 1);});
        cout<<"From Odd: "<<count<<endl;
        count++;
        lock_var.unlock();
        cond.notify_all();
    }
}

void Print_Even(){
    for( ; count < 10; ){
        unique_lock<mutex> lock_var(mtx);
        cond.wait(lock_var,[](){return(count%2 == 0);});
        cout<<"From Even: "<<count<<endl;
        count++;
        lock_var.unlock();
        cond.notify_all();
    }
}

int main(){
    thread T1(Print_Even);
    thread T2(Print_Odd);
    T1.join();
    T2.join();
    return 0;
}