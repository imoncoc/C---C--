#include <iostream>

using namespace std;

int main() {
    int n,x, b, count = 0;
    cin>>n>>b;
    for (int i = 0; i < n; i++){
        cin>>x;
        if(x <= 0){
            count++;
        }
    }
    if(count >= b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
