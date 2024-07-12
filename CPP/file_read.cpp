#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    // Read file called "File_New.txt"
   string str;
   ifstream NewFile("//home//rmayani//RBM//Program//CPP//Output//File_New.txt");
   while(getline(NewFile,str)){
        cout<<str<<endl;
   }
    NewFile.close();
    return 0;
}