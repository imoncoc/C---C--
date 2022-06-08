#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    //cin>>n>>m;
    while(cin>>n>>m){
        string str;
    vector<string> strVector;

    for(int i = 0; i < m; i++){
            int count = 0;
            int x;
        cin>>str;
        for(int j = 0; j < n; j++){
            cin>>x;
            if(x == 1){
                count++;
            }
        }
        if(count == n){
            strVector.push_back(str);
        }
    }

    if(strVector.size() == 0){
        cout<<"Pizza antes de FdI"<<endl;
    }else{
        for(auto it = strVector.begin(); it != strVector.end(); ++it){
            cout<<*it<<endl;
        }
        strVector.pop_back();
    }
    }



    return 0;
}
