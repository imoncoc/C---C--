#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int middle =  n/2;
    cout<<"Middle : "<<middle<<endl;
    double cCeil =  ceil((double)middle/2);
    cout<<"Ceil : "<<cCeil<<endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
                if( i == middle && j == middle){
                    cout<<4<<" ";
                }
                else if(i != cCeil -1 || i > middle + cCeil ){
                    if(i == j){
                    cout<<2<<" ";
                    }
                }
                else if(i == middle - 1 && j == middle -1 || i == middle - 1 && j == middle ||
                        i == middle - 1 && j == middle +1 ||
                        i == middle && j == middle -1 || i == middle && j == middle +1 ||
                        i == middle +1 && j == middle -1 || i == middle +1 && j == middle ||
                        i == middle +1 && j == middle +1){
                    cout<<1<<" ";
                }

                else if(i == 0 && j == n -1 || i == n -1 && j == 0){
                    cout<<3<<" ";
                }
                else{
                    cout<<0<<" ";
                }
        }
        cout<<endl;
    }

    return 0;
}
