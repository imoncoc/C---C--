#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, t;
    cin>>n>>t;
    vector<int> a, b;

    for(int i = 0; i < n; i++){
            int x;
          cin>>x;
        a.push_back(x+i);
    }
    for(int i = 0; i < n; i++){
        int x;
          cin>>x;
        b.push_back(x);
    }

    int time = -1, entertaining = -1, indx = -1;

    for(int i = 0; i < n; i++){
        if(a[i] <= t && b[i] > entertaining ){
                if(b[i] > entertaining){
                    entertaining = b[i];
                    indx = i;
                    time = a[i];
                }
        }
    }



    /*
    cout<<"time: "<<time<<endl;
    cout<<"entertaining: "<<entertaining<<endl;
    cout<<"index: "<<indx<<endl;

    cout<<"a: ";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"b: ";
    for(int i = 0; i < n; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"time: "<<time<<endl;
    cout<<"entertaining: "<<entertaining<<endl;
    cout<<"index: "<<indx<<endl;
    */



    if(indx == -1){
        cout<<indx<<endl;
    }
    else{
        cout<<indx+1<<endl;
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

