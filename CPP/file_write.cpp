#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    //create and write to a file called "File_New.txt"
    
    ofstream NewFile("//home//rmayani//RBM//Program//CPP//Output//File_New.txt");
    cout<<"New File created Successfully..."<<endl;
    NewFile<<"Some Text written to the above created new File"<<endl;
    
    NewFile.close();
    return 0;
}