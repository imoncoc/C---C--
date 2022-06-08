#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int a, b;
        a = arr[n-1];
        cin>>n;

        int arr2[n];
        for(int i = 0; i < n; i++){
            cin>>arr2[i];
        }
        sort(arr2, arr2+n);
        b = arr2[n-1];

        if(a < b){
            cout<<"Bob"<<endl<<"Bob"<<endl;
        }else if(a == b){
            cout<<"Alice"<<endl<<"Bob"<<endl;
        }else{
           cout<<"Alice"<<endl<<"Alice"<<endl;
        }
    }


    return 0;
}
