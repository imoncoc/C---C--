#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string name;

    ifstream file ("details.txt");


    while (getline(file,name))
    {
        cout<<name<<endl;
    }

    file.close();



    return 0;
}
