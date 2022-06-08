#include<iostream>
#include <stack>
using namespace std;
int main(){
    while(1){
        stack<int> st;
    string s;
    cin>>s;
    int n = s.size();

    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push(')');
         if(s[i] == '[') st.push(']');
         if(s[i] == '{') st.push('}');
       // else if(s[i] == ')') st.push(')');
        //else if(s[i] == '}') st.push('}');
        //else if(s[i] == ']') st.push('}');
        else{
            if(!st.empty()){
                if(s[i] == st.top()){
                    st.pop();
                }
            }
            else {
                st.push(s[i]);
            }
        }
    }

    if(st.size() == 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }


    return 0;
}
