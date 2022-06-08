#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], count = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }

    if(count == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
