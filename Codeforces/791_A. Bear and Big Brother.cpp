#include<iostream>
using namespace std;
int main(){
    int limax, bob;
    cin>>limax>>bob;
    int count = 0;

    for(int i = 0; i < 100; i++){
        if(limax > bob) break;
        else{
            limax *= 3;
            bob *= 2;
            count++;
        }
    }

    cout<<count<<endl;



    return 0;
}
