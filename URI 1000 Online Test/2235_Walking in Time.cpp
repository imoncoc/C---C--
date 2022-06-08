#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for(int i = 0; i < 3; i++){
        cin>>arr[i];
    }

    if(arr[0] - arr[1] == 0 || arr[0] - arr[2] == 0 || arr[1] - arr[2] == 0){
        cout<<"S"<<endl;
    }else if((arr[0] + arr[1]) - arr[2] == 0 || (arr[0] + arr[2]) - arr[1] == 0 ||
             (arr[1] + arr[2]) - arr[0] == 0){
                 cout<<"S"<<endl;
             }
             else{
                cout<<"N"<<endl;
             }

    return 0;
}
