#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abc";
    int n = s.size();
    vector<string> ans;

    for(int i = 0; i < pow(2, n); i++){
		        string sub = "";
		        for(int j = 0;  j < n; j++){
                    if( (i &(1 << j) ) ){
                        sub += s[i];
                    }
		        }
		        if(sub.size() > 0){
                    ans.push_back(sub);
		        }
		    }


	 sort(ans.begin(), ans.end());


	 cout<<ans.size();
	 for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
	 }




    return 0;
}
