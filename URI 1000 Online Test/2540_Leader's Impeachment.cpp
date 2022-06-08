#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    while(cin>>n){
            long long int num;
    int votePlus = 0, voteMinus = 0;
    for(int i = 0; i < n; i++){
            cin>>num;
        if(num == 1) votePlus++;
        if(num == 0) voteMinus++;
    }

    double sum = ((double)n/3.00) * 2.00;

    //cout<<"res: "<<votePlus / voteMinus<<" sum: "<<(double)sum<<endl;

   if(votePlus  >= sum){
        cout<<"impeachment"<<endl;
    }else{
        cout<<"acusacao arquivada"<<endl;
    }

    }



    return 0;
}
