#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>>str1>>str2;
    int ans = 0;

    int n1 = str1.size();
    int n2 = str2.size();

    for(int i = 0; i < n1; i++){
        if(tolower(str1[i]) > tolower(str2[i]) ){
            ans = 1;
            break;
        }
        else if( tolower(str1[i]) < tolower(str2[i]) ){
            ans = -1;
            break;
        }

    }

    cout<<ans<<endl;


    return 0;
}
