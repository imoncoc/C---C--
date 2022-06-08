#include<iostream>
using namespace std;
int main()
{
    int num[100],n,i,max=0,position=0;



    for (i=0;i<100;i++)
    {
        cin>>num[i];
    }

  for (i=0;i<100;i++)
  {
      if (num[i]>max)
      {
          max=num[i];
          position=i;
      }
  }

  cout<<max<<endl;
  cout<<position+1<<endl;

    return 0;
}
