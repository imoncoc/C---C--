#include<iostream>
using namespace std;
int main(){
    int n, m[100], count = 0;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>m[i];
    }

    for(int i = 1; i < n; i++){
        if (!(m[i-1]  <= m[i])){
            cout<<i+1<<endl;
            count++;
            break;
        }
    }

   if(count != 1){
    cout<<0<<endl;
   }



return 0;
}
