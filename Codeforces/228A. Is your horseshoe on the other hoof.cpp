#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(4);

    for(int i = 0; i < 4; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());

    int temp = arr[0], count = 0;

    for(int i = 1; i < 4; i++){
        if(temp == arr[i]){
            count++;
        }
        temp = arr[i];
    }

    cout<<count<<endl;
}
