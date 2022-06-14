#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[8][8];

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin>>arr[i][j];
        }
    }

    int ans = 0, a = 0, b = 0;
    for(int i = 0; i < 8; i++){
            int count = 0;
        for(int j = 0; j < 8; j++ ){
            if(arr[i][j] == '#'){count++;
            a = i, b = j;
            }
        }
        if(count == 2){
            ans = 2;
        } else if(ans == 2 && count == 1){
            break;
        }
    }


    cout<<a + 1<<" "<<b + 1<<endl;
    }

    return 0;
}
