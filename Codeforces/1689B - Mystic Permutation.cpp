#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> vec(n), v(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            v[i]=i+1;
        }

        if(n == 1){
            cout<<-1<<'\n';
            continue;
        }
        for(int i=0;i<n;i++){
            if(vec[i] == v[i]){
                if(i == n-1){
                    swap(v[i], v[i-1]);
                }
                else{
                    swap(v[i], v[i+1]);
                }
            }
        }
        for(auto it : v)
            cout<<it<<' ';
        cout<<'\n';
    }
    return 0;
}

