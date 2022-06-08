#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, p;
    cin>>n;
    cin>>m;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        arr.push_back(i+1);
    }

    for(int i = 0; i < m; i++){
        cin>>p;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == p){
                arr.erase(arr.begin()+p);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
