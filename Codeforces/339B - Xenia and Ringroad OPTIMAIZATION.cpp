#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    long long ans = 0, initial = 1;


    for(long long i = 0; i < n; i++){
            int x;
            cin>>x;
        if(x >= initial){
            ans += x-initial;
        }
        else {
            ans += m - (initial - x);
        }
        initial = x;
    }

    /*
    long long ans = arr[0];


    for(long long i = 1; i < n; i++){
        if(arr[i-1] < arr[i] ){
            ans += arr[i] - arr[i-1];
        }
        else if(arr[i-1] > arr[i]){
            ans += (m-arr[i-1]) + arr[i];
        }
    }
*/

    cout<<ans<<endl;





    return 0;
}

