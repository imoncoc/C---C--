#include<iostream>
using namespace std;
int main(){
    int n, sum;

    cin>>n;
    int id[n];
    double note[n];

    for(int i = 0; i < n; i++){
        cin>>id[i]>>note[i];
    }

    double largest = note[0];
    int idCheck = id[0];
    for (int i = 1; i < n; i++){
        if(largest < note[i]){
            largest = note[i];
            idCheck = i;
        }
    }

    if(largest >= 8){
        cout<<id[idCheck]<<endl;
    }
    else{
        cout<<"Minimum note not reached"<<endl;
    }




return 0;
}
