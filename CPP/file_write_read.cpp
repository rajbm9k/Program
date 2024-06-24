#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    //create and write to a file called "File_New.txt"
    /*
    ofstream NewFile("//home//rmayani//Program//CPP//File_New.txt");
    cout<<"New File created Successfully..."<<endl;
    NewFile<<"Some Text written to the above created new File"<<endl;
    */
   string str;
   ifstream NewFile("//home//rmayani//Program//CPP//File_New.txt");
   while(getline(NewFile,str)){
        cout<<str<<endl;
   }
    NewFile.close();
    return 0;
}