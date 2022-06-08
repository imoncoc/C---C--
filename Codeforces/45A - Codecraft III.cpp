#include<bits/stdc++.h>
using namespace std;
int main(){

    string month[12] = {"January", "February", "March", "April", "May", "June",
     "July", "August", "September", "October","November", "December"};

    string st;
    int n;
    cin>>st>>n;
    int ans = 0;

    for(int i = 0; i < 12; i++){
        if(st == month[i]){
            ans = i;
        }
    }

    ans = (ans + n) % 12;

    cout<<month[ans]<<endl;


    return 0;
}
