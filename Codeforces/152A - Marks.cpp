#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    int ans = 0;
    vector<string> grade(n);
    for(int i = 0; i < n; i++){
        cin>>grade[i];
    }

    for(int i = 0; i < n; ++i){
        bool wasBest = false;
        for(int j = 0; j < m; ++j){
            bool isBest = true;
            for(int k = 0; k < n; ++k){
                cout<<"a["<<k<<"]["<<j<<"]: "<<grade[i][k]<<endl;
                cout<<"a["<<i<<"]["<<j<<"]: "<<grade[i][j]<<endl;
                if(grade[k][j] > grade[i][j]){
                    isBest = false;
                }
            }
            if(isBest){
                wasBest = true;
            }
            cout<<endl;
        }
        if (wasBest){
            ans++;
        }
    }

    cout<<ans<<endl;

  return 0;
}
