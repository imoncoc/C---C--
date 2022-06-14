#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string str[n];

    for(int i = 0; i < n; i++){
        cin>>str[i];
    }
    int ans = INT_MAX;


    for(int i = 1; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
                cout<<str[i][j]<<" ";
            sum += abs(str[i-1][j] - str[i][j]);
        }
        cout<<"sum: "<<sum<<endl;
        if(ans > sum){
                ans = sum;
            }
    }

    cout<<"ans: "<<ans<<endl;



    return 0;
}
