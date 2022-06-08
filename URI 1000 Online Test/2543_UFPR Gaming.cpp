#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ID ;
    while(cin>>n>>ID){
            int count = 0;
        for(int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;
        if(a == ID){
            if(b == 0){
                    count++;
            }
        }
    }
    cout<<count<<endl;
    }




    return 0;
}
