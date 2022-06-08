#include<iostream>
using namespace std;

int main(){
    int jump, height;
    int n[100];
    cin>>jump>>height;
    cin>>n[0];

    for ( int i = 1; i < height; i++){
        cin>>n[i];

        if(abs((n[i] - n[i-1])) > jump){
         cout<<"GAME OVER"<<endl;
            return 0;
    }
    }


  cout<<"YOU WIN"<<endl;

return 0;
}
