#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[12];
    cin>>n;

    for(int i = 0; i < 12; i++){
        cin>>arr[i];
    }

    sort(arr, arr + 12, greater<int>());
    int sum = 0, count = 0;

        for(int i = 0; i < 12; i++){
        sum += arr[i];
        count++;
        if(sum >= n) break;

    }

    if(n == 0){
        cout<<0<<endl;
    }
    else if(sum < n){
        cout<<-1<<endl;
    }
    else{
        cout<<count<<endl;
    }







    return 0;
}
