#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myFile2;
    myFile2.open("myfile2.txt", ios::out); //write file
    myFile2<<"Hello "<<endl;
    myFile2<<"This is second line"<<endl;
    myFile2.close();

    // If file already exit use append to in put more value.
    myFile2.open("myfile2.txt", ios::app); //append
    myFile2<<"Hello 2"<<endl;
    myFile2.close();


return 0;
}
