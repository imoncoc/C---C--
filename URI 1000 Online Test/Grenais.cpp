#include<iostream>
using namespace std;
int Inter=0,Gremio=0,count=0,Grenais=0;

int gen()
{
    int a,b;
    cin>>a>>b;

    Grenais++;

    if (a>b)
    {
     Inter++;
    }
    else if (a<b)
    {
     Gremio++;
    }
    else
        count++;

}



int main()
 {
     gen();

     int n;
     cout<<"Novo grenal (1-sim 2-nao)"<<endl;

     while (true)
     {
         cin>>n;
      if (n==1)
     {
         gen();
         cout<<"Novo grenal (1-sim 2-nao)"<<endl;
     }
     else if (n==2)
     {
         cout<<Grenais<<" grenais"<<endl;



         cout<<"Inter:"<<Inter<<endl;
         cout<<"Gremio:"<<Gremio<<endl;
         cout<<"Empates:"<<count<<endl;

         if (Inter>Gremio)
         {
             cout<<"Inter venceu mais"<<endl;
         }
         else if (Inter<Gremio)
         {
             cout<<"Gremio venceu mais"<<endl;
         }
         else
            cout<<"Não houve vencedor"<<endl;


         break;
     }
     }



     return 0;
 }
