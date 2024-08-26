#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

constexpr int MAX = 1E6; // 10^6 = 10 lakhs
mutex mutex_obj;

int main(){
    int count = 0;
    thread t1([&count](){
        for(int i =0; i< MAX; i++){
            mutex_obj.lock();
            ++count;
            mutex_obj.unlock();
        }
    });

      thread t2([&count](){
        for(int i =0; i< MAX; i++){
            mutex_obj.lock();
            ++count;
            mutex_obj.unlock();
        }
    });
if( t1.joinable())
    t1.join();
if(t2.joinable())    
    t2.join();
cout<<"count = "<<count<<endl;
    
    return 0;
}

// 2000000 ( 20 lakhs)