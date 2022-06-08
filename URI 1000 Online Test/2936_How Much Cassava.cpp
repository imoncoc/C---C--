#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int sum = 0;

    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < 5; i++){
        if(i == 0){
            sum += arr[i] * 300;
        }
        else if(i == 1){
            sum += arr[i] * 1500;
        }
        else if(i == 2){
            sum += arr[i] * 600;
        }
        else if(i == 3){
            sum += arr[i] * 1000;
        }
        else if(i == 4){
            sum += arr[i] * 150;
        }
    }


    cout<<sum + 225<<endl;

    return 0;
}
