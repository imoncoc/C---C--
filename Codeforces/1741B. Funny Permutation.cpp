#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n == 1 || n == 3){
            cout<<-1<<endl;
        return;
    }
    else if(n % 2 == 0){
        for(int i = n; i >= 1; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else if(n == 5){
        int arr[] = {5, 4, 1, 2, 3};
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

    else if(n % 2 == 1){
            int left = n/2, right = (n/2) + 1;
        for(int i = n; i >= 1; i--){
            if(left == i){
                cout<<i+1<<" ";
            }
            else if(right == i){
                cout<<i-1<<" ";
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
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
