#include<bits/stdc++.h>
using namespace std;
int main(){
    int target;
    cin>>target;
    vector<int> arr(7);
    int sum = 0, ans = 0;
    int a = 0;

    for(int i = 0; i < 7; i++){
            cin>>arr[i];
    }

    int i = 0;
    while(target > 0){
        target -= arr[i];
        if(target <= 0) break;
        i++;
        i = i % 7;
    }

    cout<<i+1<<endl;






    return 0;
}
