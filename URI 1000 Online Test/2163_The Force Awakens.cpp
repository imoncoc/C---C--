#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 42){
                if(arr[i-1][j-1] == 7 && arr[i-1][j] == 7 && arr[i-1][j+1] == 7
                   && arr[i][j-1] == 7 && arr[i][j+1] == 7 && arr[i+1][j-1] == 7
                   && arr[i+1][j] == 7 && arr[i+1][j+1] == 7){

                    cout<<i+1<<" "<<j+1<<endl;
                    exit(0);
                   }
            }
        }

    }

    cout<<0<<" "<<0<<endl;

    return 0;
}
