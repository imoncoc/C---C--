#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string first, last;
    cin>>first>>last;
    string res = "";
    int count = 0, a = last.size() - 1;

    /*
    for(int i = 0; i < first.size(); i++){
        if(first[i] == last[a]){
            count++;
            a++;
            res += first[i];
        }
    }

    cout<<"res: "<<res<<endl;
*/

for(int i = first.size() - 1; i >= 0; i--){
        if(first[i] == last[a]){
            count++;
            a--;
            res += first[i];
        }
    }


    cout<<"res: "<<res<<endl;
    reverse(res.begin(),res.end());
    cout<<"After Reverse res: "<<res<<endl;
    }

    return 0;
}
