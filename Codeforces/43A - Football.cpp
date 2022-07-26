#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> mpp;

    for(int i = 0; i < n; i++){
            string str;
    cin>>str;
        mpp[str]++;
    }

    if(mpp.begin()->second > mpp.rbegin()->second){
        cout<<mpp.begin()->first<<endl;
    }
    else{
        cout<<mpp.rbegin()->first<<endl;
    }











    return 0;
}
