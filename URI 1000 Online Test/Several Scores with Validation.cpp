#include<iostream>
#include<iomanip>
using namespace std;

void resultCalculate() {

    float n,sum=0,m;
    int i;

    for (i=0;i<2;i++) {
        cin>>n;
        if (n>=0 && n<=10)
        {
            sum=sum+n;
        }
        else
        {
            cout<<"nota invalida"<<endl;
            i--;
        }

    }

   cout<<fixed<<setprecision(2)<<"media = "<<sum/2<<endl;
}

int main()
{
    float n,sum=0,m;
    int i;

//    for (i=0;i<2;i++) {
//        cin>>n;
//        if (n>=0 && n<=10)
//        {
//            sum=sum+n;
//        }
//        else
//        {
//            cout<<"nota invalida"<<endl;
//            i--;
//        }
//
//    }
//
//   cout<<fixed<<setprecision(2)<<"media = "<<sum/2<<endl;

    resultCalculate();


   cout<<"novo calculo (1-sim 2-nao)" << endl;

   while(true) {
        cin>>m;

        if (m == 1) {

            resultCalculate();
            cout<<"novo calculo (1-sim 2-nao)" << endl;
        }
        else if (m == 2) {
            break;
        }
        else {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
        }
   }


  /* if (m==1)
   {
       i=0;
   }
else if (m==2)
{
    break;
}*/




    return 0;
}

