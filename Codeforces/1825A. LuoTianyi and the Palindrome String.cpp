#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    if(count(s.begin(), s.end(), s[0]) == n){
        cout<<-1<<endl;
        return;
    }

    bool palindrome = false;
    int l = 0, r = n-1;
    while(l < r){
        if(s[l] != s[r]){
            palindrome = true;
            break;
        }
        else{
            l++;
            r--;
        }
    }

    if(palindrome){
        cout<<n<<endl;
    }
    else {
        cout<<n-1<<endl;
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

