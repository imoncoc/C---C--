#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s1[n], s2[n], count = 0;

    for(int i = 0; i < n; i++){
        cin>>s1[i]>>s2[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s1[i] == s2[j]) count++;
        }
    }


    cout<<count<<endl;






    return 0;
}
