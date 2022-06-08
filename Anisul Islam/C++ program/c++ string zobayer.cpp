#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char name1[20];
    string name2;

   // name1 = "Hello  World.";
    name2 = "Hello World.";
    cout<<name1<<endl;

    name2[6]='F';

    reverse (name2.begin(),name2.end());
    cout<<name2<<endl;



    return 0;
}
