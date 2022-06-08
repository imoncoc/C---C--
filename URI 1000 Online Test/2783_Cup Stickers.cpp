#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int count = y;

    int arr1[y], arr2[z];

for(int i = 0; i < y; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < z; i++){
        cin>>arr2[i];
    }

    for(int i = 0; i < y; i++){

        for(int j = 0; j < z; j++){
            if(arr1[i] == arr2[j]){
                count--;
            }
        }
    }

    cout<<count<<endl;




    return 0;
}
