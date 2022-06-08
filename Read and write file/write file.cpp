#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myFile;
    myFile.open("myfile.txt", ios::out); //write file
    myFile<<"Hello "<<endl;
    myFile<<"This is second line"<<endl;
    myFile.close();


return 0;
}
