#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   string str;
   while(cin>>str){
    int n, num;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>num;

        cout<<str[num - 1];
    }
    cout<<endl;
   }



    return 0;
}
