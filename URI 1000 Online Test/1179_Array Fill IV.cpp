#include<iostream>
#include <iterator>
using namespace std;
int main(){
    int impar_index=0, par_index=0, count = 0;
    int impar[15];
    int A[15];
    int par[15];

    for (int i = 0; i < 15; i++){
       cin>>A[i];
    }

    for (int i = 0; i < 15; i++){
        if(A[i]% 2 == 0){
            par[par_index++] = A[i];
        }
        else{
            impar[impar_index++] = A[i];
        }

        if(par_index == 5){
                count = 0;
            while(count != 5){
                cout<<"par["<<count<<"] = "<<par[count]<<endl;
                count++;
            }
            par_index = 0;
        }

        if(impar_index == 5){
            count = 0;
            while(count != 5){
                cout<<"impar["<<count<<"] = "<<impar[count]<<endl;
                count++;
            }
            impar_index = 0;
        }
        if ( i == 14){
            count = 0;
            while(count < impar_index){
                cout<<"impar["<<count<<"] = "<<impar[count]<<endl;
                count++;
            }
            count = 0;
            while(count < par_index){
                cout<<"par["<<count<<"] = "<<par[count]<<endl;
                count++;
            }
        }
    }



    return 0;
}
