#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;

        if( (x-d)>1 && (y+d)< m ){
            cout<<n+m-2<<endl;
        }
        else if( (y-d)>1 && (x+d)< n ){
            cout<<n+m-2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }


    return 0;
}
