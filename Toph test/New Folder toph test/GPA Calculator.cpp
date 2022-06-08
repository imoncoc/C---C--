#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int caseCount = 0;

    while(t--){
        int n;
    cin>>n;
    float arr[n];
    float ans = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        ans += arr[i];
    }

    ans = ans/n;
    caseCount++;

    cout<<"Case "<<caseCount<<": "<<fixed<<setprecision(3)<<ans<<endl;

    }





    return 0;
}
