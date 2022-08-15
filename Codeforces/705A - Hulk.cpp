#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n == 1) cout<<"I hate it"<<endl;

    else{
    for(int i = 0; i < n; i++){

        if(i % 2 == 0) cout<<"I hate";
        if(i % 2 == 1) cout<<"I love";
        if(i != n-1) cout<<" that ";
        if(i == n - 1) cout<<" it";

    }
    }








    return 0;
}
