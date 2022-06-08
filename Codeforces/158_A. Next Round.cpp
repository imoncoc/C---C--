#include<iostream>
using namespace std;
int main(){
    int n, k, m;
    cin>>n>>k;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        m = arr[k-1];
    }

    //cout<<m;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= m && arr[i] > 0)count++;
    }

    cout<<count<<endl;

    return 0;
}
