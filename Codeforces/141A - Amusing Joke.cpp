#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    string disorder;
    cin>>str1;
    cin>>str2;
    cin>>disorder;

    string res = str1 + str2;

    sort(disorder.begin(), disorder.end());
    sort(res.begin(), res.end());

/*
    cout<<"Str1: "<<str1<<endl;
    cout<<"Str2: "<<str2<<endl;
    cout<<"Disorder: "<<disorder<<endl;
    cout<<"res: "<<res<<endl;
    */

    string ans = "NO";

    int len1 = disorder.size();
    int len2 = res.size();
    int count = 0;

    if(len1 == len2){
        for(int i = 0; i < len1; i++){
            if(disorder[i] == res[i]){
                count++;
            }
        }
    }

    if(count == len1){
        ans = "YES";
    }


    cout<<ans<<endl;






    return 0;
}
