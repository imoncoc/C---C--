#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str1, str2;
    int n, m, k;
    cin>>n>>m>>k;
    cin>>str1;
    cin>>str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    int i = 0, j = 0;
    int count1 = 0, count2 = 0;
    string ans;

    while( i < str1.size() && j < str2.size()){
        if(str1[i] <= str2[j]){
            if(count1 < k){
                ans += str1[i];
                i++;
                count1++;
                count2 = 0;
            }
            else{
                ans += str2[j];
                j++;
                count2 = 1;
                count1 = 0;
            }
        }

        else{
            if(count2 < k){
                ans += str2[j];
                j++;
                count2++;
                count1 = 0;
            }
            else{
                ans += str1[i];
                i++;
                count1 = 1;
                count2 = 0;
            }
        }
    }

    cout<<ans<<endl;
    }



    return 0;
}

