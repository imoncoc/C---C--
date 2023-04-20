#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string str;
        cin >> str;
        int cnt = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '_') {
                // if (!i) cnt++;
                if (i + 1 == str.size() || str[i + 1] != '^') {
                    cnt++;
                    str.insert(str.begin() + i + 1, '^');
                }
                if (i - 1 == -1 || str[i - 1] != '^') {
                    cnt++;
                    str.insert(str.begin() + i, '^');
                }
            }
        }
        if (str == "^")
            cout << 1 << endl;
        else
            cout << cnt << endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

