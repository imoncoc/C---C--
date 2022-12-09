#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int count = 0;
    for(int i = 0; i < n-2; i++){

        for(int j = i+1; j < n-1; j++){

            for(int k = j+1; k < n; k++){
                string sub = "";
                    sub += s[i];
                    sub += s[j];
                    sub += s[k];
                //cout<<s[i]<<s[j]<<s[k]<<" ";
                //cout<<sub<<" ";
                if(sub == "QAQ") count++;
            }
        }
    }

    cout<<count<<endl;

}
int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

