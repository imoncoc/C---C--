#include<iostream>
using namespace std;
int main()
{
    int pa,pb,p1,p2,n,i;
    double ga,gb;

    cin>>n;

    for (i=0; i<n; i++)
    {


        cin>>pa>>pb;
        cin>>ga>>gb;
        int tempPA=0,tempPB=0,count=0;

        p1 = (double)pa*ga/100;
        p2 = (double)pb*gb/100;


        while (1)
        {



//        p2 = (double)pb*gb/100;

            tempPA = pa + p1;
            pa = tempPA;

            p1 = (double)pa*ga/100;

            tempPB = pb + p2;

            pb = tempPB;
            p2 = (double)pb*gb/100;

            count++;

//            cout<<tempPA<<"\t";
//            cout<<tempPB<<endl;


            if (tempPA>tempPB)
            {
                break;
            }
        }
        if (count>100)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
        {
            cout<<count<<" anos."<<endl;
        }
    }

    return 0;
}
