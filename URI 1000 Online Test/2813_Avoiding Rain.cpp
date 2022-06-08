#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str1, str2;
    string arr[n][n];
    int home = 0, office = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cout<<arr[i][j]<<" ";

            if(arr[0][0] == "chuva"){
                home++;
            }else if(arr[0][1] == "chuva"){
                office++;
            }
        }
        cout<<endl;
    }

    cout<<"Home : "<<home<<endl;
    cout<<"Office : "<<office<<endl;

    return 0;
}
