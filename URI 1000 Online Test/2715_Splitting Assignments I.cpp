#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int count = 0;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i < n; i++){
        if(arr[i - 1] == arr[i]){
            count++;
        }
    }

    if(count == 0){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }




    return 0;
}
