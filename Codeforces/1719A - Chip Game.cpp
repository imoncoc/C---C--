#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        int count = 0;

        count += (n%2);
        count += (m%2);
        //cout<<count<<endl;

        if(count % 2) cout<<"Burenka"<<endl;
        else cout<<"Tonya"<<endl;
    }





    return 0;
}
