#include<bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 0; i < 7; i++){
            int n = 39;
        for(int j = 0; j < n; j++){
                if( i == 0 || i == 6){
            cout<<"-";
                }else if(j == 0 || j == n - 1){
                    cout<<"|";
                }else if(i == 1 && j == 9){
                    cout<<"Roberto";
                    n = 33;
                }else if(i == 3 && j == 9){
                    cout<<5786;
                    n = 36;
                }else if(i == 5 && j == 9){
                    cout<<"UNIFEI";
                    n = 34;
                }
                 else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }



    return 0;
}

