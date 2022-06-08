#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n;
    cin>>n;
    long long int arr[n];
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
        odd++;
        }
    }

    cout<<min(even, odd)<<endl;
    }


    return 0;
}
