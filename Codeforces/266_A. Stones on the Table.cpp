#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char st[n];
    int count = 0;

    for(int i = 0; i < n; i++){
        cin>>st[i];
    }

    for(int i = 1; i < n; i++){
        if(st[i-1] == st[i]){
                count++;
        }
    }


    cout<<count<<endl;


    return 0;
}
