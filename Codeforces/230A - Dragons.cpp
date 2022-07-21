#include<bits/stdc++.h>
using namespace std;
int main(){
    int s, n;
    cin>>s>>n;
    string res = "YES";
    int ans = s;

    vector<pair<int, int>> vec;


    for(int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;
        vec.push_back(make_pair(a, b));
    }

    sort(vec.begin(), vec.end());
    for (auto& x: vec){
        //std::cout << x.first << ": " << x.second << std::endl;
        if(ans > x.first){
            ans += x.second;
        }
        else if(ans <= x.first){
            res = "NO";
            break;
        }
    }

    //cout<<"Ans: "<<ans<<endl;
    //cout<<"RES: "<<res<<endl;
    cout<<res<<endl;




    return 0;
}
