#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0, temp = 0, count = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n, greater<int>());

    for(int i = 0; i < n; i++){
        temp += arr[i];
        count++;
        if(temp > sum/2){
            break;
        }
    }

    cout<<count<<endl;





    return 0;
}
