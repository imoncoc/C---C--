#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, m, ans = 0;
    cin>>n>>m;
    string str[n];

    for(int i = 0; i < n; i++){
        cin>>str[i];
    }

    for(int i = 0; i < n; i++){
        cout<<str[i]<<endl;
    }

    for(long long i = 0; i < n - 1; i++){
            cout<<str[i][m-1]<<" ";
            if(str[i][m-1] != 'D') ans++;
        }

        cout<<ans<<endl;

        for(long long i = 0; i < m - 1; i++){
                cout<<str[n -i][i]<<" ";
            if(str[n-1][i] != 'R') ans++;
        }
        cout<<ans<<endl;


    return 0;
}
