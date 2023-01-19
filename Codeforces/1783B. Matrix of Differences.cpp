#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    int a = 1, b = n*n;
    bool flag = true;
    for(int i = 0; i < n*n; i++){
            if(flag){
                arr.push_back(b--);
                flag = false;
            }
            else{
                arr.push_back(a++);
                flag = true;
            }


    }


    int x = 0;
     for(int i=1; i<=n; i++)
        {
            if(i%2==1)
            {
                for(int j=x; j<x+n; j++){
                        cout<<arr[j]<<" ";
                     }
                cout<<endl;
                x+=n;

            }
            else
            {
                for(int j=(n+x)-1; j>=x; j--){
                    cout<<arr[j]<<" ";
                }
                cout<<endl;
                x+=n;
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

