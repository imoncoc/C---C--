#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ans = 1, prev = 6;

    for(int i = 0; i < n; i++){

        ans += prev;
        prev += 6;
    }

    cout<<ans<<endl;





    return 0;
}
