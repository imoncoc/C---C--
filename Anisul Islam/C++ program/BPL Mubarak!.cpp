#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char ch[100];
    int i,n,over=0,count=0,ball=0,a,j;
    cin>>a;

    for(j=0; j<a; j++)
    {
        cin>>ch;
        count=0;
        n = strlen(ch);
        //  cout<<ch<<endl;

        for(i = 0; i < n; i++)
        {
            if (ch[i] == 'O')
            {
                count++;
            }
            else if (ch[i] >= '0' && ch[i] <= '6')
            {
                count++;
            }
        }
        over = count/6;
        ball=count%6;


        //cout << count << endl;

        if(over>0)
        {

            if(over==1)
            {
                cout<<over<<" OVER";
            }
            else if(over>1)
            {
                cout<<over<<" OVERS";
            }
            if (ball==1)
            {
                cout << " " <<ball<<" BALL";
            }
            else if (ball>1)
            {
                cout << " " <<ball<<" BALLS";
            }
        }

        else if (ball>0)
        {
            if (ball==1){
                    cout <<ball<<" BALL";

            }
              else
            cout <<ball<<" BALLS";
        }
        cout<<endl;
    }




    return 0;
}
