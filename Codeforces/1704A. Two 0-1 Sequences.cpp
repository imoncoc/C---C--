#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;

    bool possible = true;

        if(a == b){
            cout<<"YES"<<endl;
            return;
        }
        if(b.size() == 1){
            if(count(a.begin(),a.end(),b[0]) == 0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            return;
        }


        if(b.size() >= a.size() || a.back() != b.back()){
            cout<<"NO"<<endl;
            return;
        }


        while(b.size() > 1){
            if(a.back() != b.back()){
                possible = false;
                break;
            }
            a.pop_back();
            b.pop_back();
        }

        if(!possible){
            cout<<"NO"<<endl;
            return;
        }

        if(count(a.begin(),a.end(),b[0]) == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

