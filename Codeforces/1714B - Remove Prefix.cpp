#include<bits/stdc++.h>
using namespace std;
int main(){

        int t;
        cin>>t;
        while(t--){
            int n;
    cin>>n;
    int arr[n+1];

    for(int i = 0; i < n; i++){
            cin>>arr[i];
    }

    set<int> st;
    int j = 0;

    for(int i = n-1; i >= 0; i--){
            st.insert(arr[i]);
            j++;
            //cout<<"arr: ["<<i<<"]: "<<arr[i]<<endl;
    //cout<<"j: "<<j<<endl;
    //cout<<"st.size: "<<st.size()<<endl;


    if(st.size() != j){
        j--;
        break;
        //cout<<"j: "<<j<<endl;
    }
    }

    cout<<n - j<<endl;
        }




    return 0;
}
