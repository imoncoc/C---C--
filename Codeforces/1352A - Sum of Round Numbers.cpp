#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int temp = 0, temp2 = 1, count = 0;
    vector<int>arr;

    while(n != 0){
            count++;
        temp = n % 10;
        n = n / 10;
        //cout<<temp * temp2<<endl;
        if(temp != 0){
           arr.push_back(temp * temp2);
        }

        temp2 *= 10;
    }
    sort(arr.begin(), arr.end(), greater<int>());
    cout<<arr.size()<<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }






    return 0;
}
