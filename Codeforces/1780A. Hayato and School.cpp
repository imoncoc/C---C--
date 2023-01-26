#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> a;
    int odd = 0, even = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        a.push_back(x);
        if(x % 2 == 0) even++;
        else odd++;
    }

    if(odd >= 3){
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 1 && count != 3){
                cout<<i+1<<" ";
                count++;
            }
            if(count == 3){
                    cout<<endl;
                break;
            }
        }
    }
    else if(even >= 2 && odd >= 1){
        cout<<"YES"<<endl;
        bool oddCount = true;
        for(int i = 0; i < n; i++){
                if(a[i] % 2 == 1 && oddCount){
                    cout<<i+1<<" ";
                    oddCount = false;
                }
            else if(a[i] % 2 == 0 && count != 2){
                cout<<i+1<<" ";
                count++;
            }
            if(count == 2 && oddCount == false){
                    cout<<endl;
                break;
            }
        }
    }
    else{
        cout<<"NO"<<endl;
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

