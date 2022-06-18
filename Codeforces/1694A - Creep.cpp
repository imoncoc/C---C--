#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int n = a+b;

        if(b >= a){
                for(int i = 0; i < n; i++){
                    if(i%2 == 1 && a){
                        cout<<"0";
                        a--;
                    }
                    else{
                        cout<<"1";
                    }
                }
                cout<<endl;
        }
        else{
            for(int i = 0; i < n; i++){
                if(i % 2 == 1 && b){
                    cout<<"1";
                    b--;
                }
                else{
                    cout<<"0";
                }
            }
            cout<<endl;
        }
    }



    return 0;
}
