#include<iostream>
using namespace std;
void f(int l, int r, int arr[]){
    if( l >= r) return;
    swap(arr[l], arr[r]);
    return f(l+1, r-1, arr);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    f(0, n-1, arr);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}
