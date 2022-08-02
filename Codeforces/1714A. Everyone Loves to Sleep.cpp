#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
    cin>>n>>h>>m;
    int ans = INT_MAX;
    set<pair<int, int>> st;
    while(n--){
           int x,y;
           cin>>x>>y;
           st.insert({x,y});
    }

    int h1 = 0, m1 = 0;

    while(!st.count({h,m})){
        if(m == 59){
            h++;
            m = 0;
            h %= 24;
        }
        else{
            m++;
        }
        m1++;
    }

    cout<<m1/60<<" "<<m1%60<<endl;
    }
    return 0;
}

