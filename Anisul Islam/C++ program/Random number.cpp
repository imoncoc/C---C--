#include<iostream>
#include<stdlib.h>
using namespace std;
int main ()
{

    for (int i=0;i<5;i++)
    {
       int randomNumber = rand () % 5 + 1;
    cout<<"Random number : "<<randomNumber<<endl;
    }




    return 0;
}
