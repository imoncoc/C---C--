#include<iostream>
using namespace std;
int main(){
    int n, a;
    cin>>n>>a;
    int count = 0;

    for(int i = 1; i <= n; i++){
        if( i % a == 0){
            n++;
        }

        count++;
    }

    cout<<count<<endl;

    return 0;
}
