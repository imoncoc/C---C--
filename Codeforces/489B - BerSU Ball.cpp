#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> boys;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        boys.push_back(x);
    }

    int m;
    cin>>m;
    vector<int> girls;

    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        girls.push_back(x);
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int i = 0, j = 0, count = 0;

    while(i < n && j < m){
        if(boys[i] == girls[j] || boys[i]+1 == girls[j] || boys[i] == girls[j]+1){
            count++;
            i++;
            j++;
        }
        else if(boys[i] < girls[j]) i++;
        else j++;
    }



    cout<<count<<endl;



    return 0;
}
