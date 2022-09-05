#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
        string str;
        cin>>str;

        vector<int> stairs;
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(str[i] == '1'){
                stairs.push_back(i);
            }
        }


        int m = stairs.size();


        if(m == 0) ans = n;
        else{
           int l = max( (n - 1 - stairs[0]), stairs.back() );
           ans = 2 * (l+1);
        }

        cout<< ans<<endl;

    }









    return 0;
}
