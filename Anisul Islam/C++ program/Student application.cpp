#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter how many student : ";
    cin>>n;
    int marks[n],sum=0;

    for (i=0;i<n;i++)
    {
        cout <<"Marks for Student "<<i+1<<" : ";
        cin>>marks[i];
        sum=sum+marks[i];
    }
    cout<<"Tottals marks = "<<sum<<endl;
    float avg;
    avg = (float)sum/n;
    cout<<"Averge is = "<<avg<<endl;

    int max=marks[0];
    int min=marks[0];
    for (i=1;i<n;i++)
    {
        {
          if (max<marks[i])
            max=marks[i];
        }
        {
           if (min>marks[i])
            min=marks[i];
        }

    }
    cout<<"Max number is = "<<max<<endl;
    cout<<"Minimum number is = "<<min<<endl;


    return 0;
}
