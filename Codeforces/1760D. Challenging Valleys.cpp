#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int left = 0, right = n - 1, count = 1;
    bool flag = false;

    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i-1]) count++;
    }
    //cout<<"count: "<<count<<endl;

    if(count == n) flag = true;
    int prevLeft = arr[left++], prevRight =  arr[right--];
    //cout<<"prevLeft: "<<prevLeft<<endl;
    //cout<<"prevRight: "<<prevRight<<endl;


    while(left <= right){
            //cout<<"prevLeft: "<<prevLeft<<endl;
            //cout<<"prevRight: "<<prevRight<<endl;
        if(arr[left] <= prevLeft){
                prevLeft = arr[left];
            left++;
        }
        if(arr[right] <= prevRight){
                prevRight = arr[right];
            right--;
        }
    }

    //cout<<"prevLeft: "<<prevLeft<<endl;
    //cout<<"prevRight: "<<prevRight<<endl;



    if(flag == true || prevLeft == prevRight){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    //t = 1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

