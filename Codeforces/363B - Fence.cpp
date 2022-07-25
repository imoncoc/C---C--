#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long> arr;

    for(long long i = 0; i < n; i++){
            int x;
    cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    long long int sum = 0, count = 0;

    for(long long i = 0; i < n; i++){
        sum += arr[i];
        count++;

        if(sum >= k){
            break;
        }
    }


    cout<<count<<endl;




    return 0;
}
