#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any Charcter : ";
    cin>>ch;

    //this code mane any upper case charcter make lower. like 'A'
    ch=tolower(ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowels.";
        break;
    default:
        cout<<"consonat.";
    }



    getch();
}

