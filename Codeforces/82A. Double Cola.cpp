#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i == 1) {
            cout<<"Sheldon"<<endl;
        }
        else if(i == 2){
            cout<<"Leonard"<<endl;
        }
        else if(i == 3){
            cout<<"Penny"<<endl;
        }
        else if(i == 4){
            cout<<"Rajesh"<<endl;
        }
        else if(i == 5){
            cout<<"Howard"<<endl;
        }
    }
}
int main(){
    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}

