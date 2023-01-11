#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    int n = s.size();

    if(count(s.begin(), s.end(), 'a') == n ||
       count(s.begin(), s.end(), 'b') == n){
        cout<<s[0]<<" "<<s.substr(1, n-2)<<" "<<s[n-1]<<endl;
        return;
       }

    if(s[0] == 'a'){
        if(s[1] == 'a'){
            cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2, n-2)<<endl;
        }
        else{
            int indx = -1;
            for(int i = 2; i < n; i++){
                if(s[i] == 'a'){
                    indx = i;
                    break;
                }
            }
            if(indx == -1){
                cout<<s[0]<<" "<<s.substr(1, n-2)<<" "<<s[n-1]<<endl;
            }
            else{
                cout<<s[0]<<" ";
                for(int i = 1; i< indx; i++ ){
                    cout<<s[i];
                }
                cout<<" ";
                for(int i = indx; i < n; i++){
                    cout<<s[i];
                }
                cout<<endl;
            }
        }
    }

    else{
            if(s[1]=='b'){
                cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n-2)<<endl;
            }
            else{
                int indx=-1;
                for(int i=2;i<n;i++){
                    if(s[i]=='b'){
                        indx=i;
                        break;
                    }
                }
                if(indx == -1){
                    cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n-2)<<endl;
                }
                else{
                    cout<<s[0]<<" ";
                    for(int i=1;i<indx;i++){
                        cout<<s[i];
                    }
                    cout<<" ";
                    for(int i=indx;i<=n-1;i++){
                        cout<<s[i];
                    }
                    cout<<endl;
                }
            }
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

