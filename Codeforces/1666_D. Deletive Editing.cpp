#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string first, last, res = "";
    cin>>first>>last;

    for(int i = 0; i < first.size(); i++){
            int count = 0;
        for(int j = 0; j < last.size(); j++){
            if(first[i] == last[j]){
                count++;
            }
        }

        if(count >= 1){
                res += first[i];
            }
    }

    cout<<"Res: "<<res<<endl;
    reverse(res.begin(), res.end());
    cout<<"After Reverse: "<<res<<endl;

    string ans = "";

    for(int i = res.size()-1; i >= 0; i--){
            int count = 0;
        for(int j = i; j >= 0; j--){
            if(res[i] == res[j]){
                count++;
            }

        }
        if(count == 1){
                ans += res[i];
            }
    }

    cout<<"Ans: "<<ans<<endl;

    if(ans == last){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }


    return 0;
}
