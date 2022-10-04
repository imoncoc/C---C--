#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, x, y;
    cin>>n>>x>>y;

    if(x < y) swap(x, y);
    if(x && !y && (n-1)%x == 0){
            int a = 2;
            for(int i = 0; i < (n-1)/x; i++){
                for(int j = 0; j < x; j++){
                    cout << a << ' ';
                }
                a += x;
            }
            cout <<endl;;
        }else{
            cout << -1 << endl;
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

