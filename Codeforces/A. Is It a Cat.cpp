#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res = "meow";
    bool flag = true;
    int a = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //cout<<"s: "<<s<<endl;
    for(int i = 0; i < n; i++){
        if(s[i] == res[a]){
            a++;
        }
        else if(s[i] == 'm' || s[i] == 'e' || s[i] == 'o' || s[i] == 'w'){
                continue;

        }
        else{
            flag = false;
        }
        //cout<<"flag: "<<flag<<endl;
    }

    if(a >= 4 && flag == true){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

