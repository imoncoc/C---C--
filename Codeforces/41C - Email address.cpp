#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;

    string res = "", ans = "";
    int n = str.size(), att = 0;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    //cout<<str<<endl;

    for(int i = 0; i < str.size(); i++){
            //cout<<res<<" ";
            if(str[i] == 'a' && str[i+1] == 't' && ans.size() > 0 && str[i+2] && att == 0){
                res += "at";
              i++;
              att++;
            }else if(str[i] == 'd' && str[i+1] == 'o' && str[i+2] == 't' &&
                      ans.size() > 0 && str[i+3]){
                res += "dot";
                i++;
                i++;
            }
            else{
                res = "";
            }

        if(res == "at"){
            ans += '@';
            res = "";
        }else if(res == "dot"){
            ans += '.';
            res = "";
        }
        else{
            ans += str[i];
        }
    }


        cout<<ans<<endl;






    return 0;
}
