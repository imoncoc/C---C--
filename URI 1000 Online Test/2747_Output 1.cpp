#include<bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 0; i < 7; i++){
        for(int j = 0; j < 39; j++){
                if( i == 0 || i == 6){
            cout<<"-";
                }else if(j == 0 || j == 38){
                    cout<<"|";
                }else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }



    return 0;
}
