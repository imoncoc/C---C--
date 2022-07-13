#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    string str;
    cin>>str;

    sort(str.begin(), str.end());
    //cout<<str<<endl;

    int count = 0;

    for(int i = 1; i <= str.size(); i++){
        if(str[i-1] == str[i]) count++;
        else count += 2;

        //cout<<"count: "<<count<<endl;
    }


    cout<<count<<endl;
    }




    return 0;
}
