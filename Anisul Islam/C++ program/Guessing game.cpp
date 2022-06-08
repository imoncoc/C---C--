#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    int gussNumber,randomNumber;

    while(1)
    {

    cout<<"Enter your Gussing number between 1 to 5 : ";
    cin>>gussNumber;

    randomNumber = rand()%5+1;

    if (gussNumber==randomNumber)
    {
        cout<<"You have won."<<endl<<endl;
    }
    else
    {
        cout<<"You entered wrong answer. let's try Again. "<<endl;
        cout<<"The number was = "<<randomNumber<<endl<<endl;
    }
    }


    getch();
}
