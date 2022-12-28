#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string a, ans;
    cin>>a;
    int one = 0;

    for(int i = 0; i < n; i++)
        {
            if(i == 0){
                if(a[i] == '1'){
                    one++;
                }
            }
            else{
                if(a[i] == '1'){
                    one++;

                    if( (one % 2 ) == 0 ){
                        ans += '-';
                    }
                    else{
                       ans += '+';
                    }
                }else{
                    ans += '+';
                }
            }
        }



    cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

