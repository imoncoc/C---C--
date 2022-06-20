#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int maxi = INT_MIN;
        int a, b, n, m;
        cin>>n>>m;
        int arr[n+3][m+4];

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin>>arr[i][j];

                if(arr[i][j] > maxi){
                    maxi = arr[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        int x, y;
        x = max(a, (n-a) + 1);
        y = max(b, (m-b) + 1);
        cout<<x*y<<endl;
    }




    return 0;
}
