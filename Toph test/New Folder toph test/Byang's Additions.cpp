#include<iostream>
#include <algorithm>

using namespace std;
int main()
{
    int num1,num2,temp,r,sum=0,i=0,j=0, arrNum1[10], arrNum2[10];
   // cout<<"Enter any interger for number 1 : ";
    cin>>num1;
   // cout <<"Input Is : "<<num1<<endl;

   // cout<<"Enter any interger for number 2 : ";
    cin>>num2;
    //cout <<"Input Is : "<<num2<<endl;

    temp=num1;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;

        arrNum1[j] = r;
       // cout<<"J"<<j<<" = "<<r<<endl;
        j++;
    }

    temp=num2;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;

        arrNum2[i] = r;

        i++;
       // cout<<"I"<<i<<" = "<<r<<endl;
    }


    int target = min(i, j);
    int l = 0;

    int confuse = 0;

    while(l < target) {
        if (arrNum1[l] + arrNum2[l] > 9) {
            confuse = 1;
            break;
        }
        ++l;
    }

    if (confuse == 1) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

