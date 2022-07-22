#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> arr;
    string res = "NO";

    for(int i = 0; i < n - 1; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int pos = 1, next;

    while(pos < m){
            next = pos + arr[pos-1];
            pos = next;


    }

    if( pos == m ){
            res = "YES";
        }

    cout<<res<<endl;



    return 0;
}
