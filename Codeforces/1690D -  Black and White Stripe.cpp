#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    char st[n];
    int ans = 0;

    for(int i = 0; i < n; i++){
        cin>>st[i];
    }

    string res;
    int count = 0, resCount = 0;
    for(int i = 0; i < n; i++){
            if(st[i] == 'B'){
                res += st[i];
            }else{
                res += 'B';
                resCount++;
            }

        if(st[i] == 'B'){
            count++;
            if(ans < count){
                ans = count;
            }
        }else{
            count = 0;
        }
    }

    /*
    cout<<"Ans: "<<ans<<endl;
    cout<<"Res: "<<res<<endl;
    cout<<"Res: "<<resCount<<endl;

    */
    if(ans >= k){
            ans = 0;
        //cout<<"1st if: "<<ans<<endl;
        cout<<ans<<endl;
    }else{
        ans = k - ans;

       if(resCount < ans){
        //cout<<"2nd res: "<< resCount<<endl;
        cout<<resCount<<endl;
       }else{
           //cout<<"Last else: "<<ans<<endl;
           cout<<ans<<endl;
       }

    }

    }





    return 0;
}
