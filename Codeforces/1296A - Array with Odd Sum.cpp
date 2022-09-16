#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int> arr(n);
    int sum = 0, even = 0, odd = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];

        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(sum % 2 == 1){
        cout<<"YES"<<endl;
    }
    else if(even >= 1 && odd >= 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }






    return 0;
}
