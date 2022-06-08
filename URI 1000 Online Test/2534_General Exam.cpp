#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int person[n], quries[q];
    for (int i = 0; i < n; i++){
        cin>>person[i];
    }
    for (int i = 0; i < q; i++){
        cin>>quries[i];
    }

    for(int i = 0; i < q; i++){
        cout<<person[quries[i - 1]]<<endl;
    }


    return 0;
}
