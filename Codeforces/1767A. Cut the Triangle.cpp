#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    vector<int> A(3);
    vector<int> B(3);
    for(int i = 0; i < 3; i++){
        cin>>A[i];
        cin>>B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if( (A[0] < A[1] && A[1] < A[2] || (B[0]) < B[1] && B[1] < B[2]) ){
        cout<<"YES"<<endl;
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

