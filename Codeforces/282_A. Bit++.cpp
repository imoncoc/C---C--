#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    int count = 0;

    for(int i = 0; i < n; i++){
        cin>>str[i];
    }

    for(int i = 0; i < n; i++){
        if(str[i] == "++X" || str[i] == "X++"){
            count++;
        }
        else if(str[i] == "--X" || str[i] == "X--"){
            count--;
        }
    }




    cout<<count;




return 0;
}
