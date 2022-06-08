#include<iostream>
using namespace std;
int main(){
     int n, nCount = 0;

    while(cin>>n){
            nCount++;
        int count = 0;
    for (int i = 0; i <= n; i++){
            if(i == 0){
                //cout<<i<<" ";
                count++;
            }
        for ( int j = 0; j < i; j++){
          //  cout<<i<<" ";
            count++;
        }
    }

    if(count == 1){
       cout<<"Caso "<<nCount<< ": "<<count<<" numero"<<endl;
    }else{
        cout<<"Caso "<<nCount<< ": "<<count<<" numeros"<<endl;
    }



    for (int i = 0; i <= n; i++){
            if(i == 0){
                cout<<i;
                if(i != n){
                    cout<<" ";
                }
                count++;
            }
        for ( int j = 0; j < i; j++){
            cout<<i;
            if(n-1 != j){
                cout<<" ";
            }
            count++;
        }
    }
        cout<<endl<<endl;
    }



    return 0;
}
