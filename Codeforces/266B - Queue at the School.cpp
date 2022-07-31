#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    string str;
    cin>>str;

    while(m--){
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'B' && str[i+1] == 'G' && i != str.size() - 1 ){
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }

    cout<<str<<endl;


    return 0;
}
