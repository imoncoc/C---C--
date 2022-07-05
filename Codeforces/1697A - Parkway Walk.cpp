#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n, m;
    cin>>n>>m;
    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    if(sum >= m) cout<<sum - m<<endl;
    else cout<<0<<endl;


    }






    return 0;
}
