#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin>>n>>h;
    double arr[n], count = 0;


    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        count += ceil(arr[i]/h);
       // cout<<"C: "<<count<<endl;
    }

    cout<<count<<endl;






    return 0;
}
