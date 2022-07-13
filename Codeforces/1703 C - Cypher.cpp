#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int a = 0;
    int z = n;

    while(z--){
            int x;
            cin>>x;
        string str;
        cin>>str;

        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'D'){
                arr[a]++;
                if(arr[a] == 10){
                    arr[a] = 0;
                }
            }
            else if(str[i] == 'U'){
                arr[a]--;
                if(arr[a] == -1){
                    arr[a] = 9;
                }
            }
        }

        a++;
    }


    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }




    return 0;
}
