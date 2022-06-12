#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count = 0;
    int time = 240;

    for(int i = 1; i <= n; i++){
            k += (i*5);
            if(k > time){
                break;
            }
            else{
                count++;
            }
    }


    cout<<count<<endl;

    return 0;
}
