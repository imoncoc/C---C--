
#include<bits/stdc++.h>
using namespace std;
void f(int i, string arr[], int n){
    if(i >= n/2) return;

    swap(arr[i], arr[n-i -1]);
}
int main(){
    string arr = "ab-cd";
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;


    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
