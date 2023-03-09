#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    priority_queue<int> pq;
    ll ans = 0;
    while(n--){
        int x;
        cin>>x;
        if(x == 0){
            if(!pq.empty()){
               ans += pq.top();
               pq.pop();
            }
        }
        else{
            pq.push(x);
        }

    }

    //cout<<"ans: "<<ans<<endl;
    cout<<ans<<endl;
    /*
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    */
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}



