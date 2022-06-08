#include<bits/stdc++.h>
using namespace std;
int main(){
    string m;
    string n;
    cin>>n>>m;
    vector<char> myVector;

    for(int i = 0; i < m.size(); i++){
            if(n.compare() != m[i]){
                    continue;
            }
            else{
               myVector.push_back(m[i]);
            }
    }

    for(int i = 0; i < myVector.size(); i++){
        cout<<myVector[i]<<" ";
    }





    return 0;
}
