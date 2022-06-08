#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int positive = 0, negative = 0, count = 0;

    for(int i = 1; i <= n; i++){
            cout<<"Sum: "<<n/i<<endl;
        if(n % i == 0){
            positive++;
        }else{
            negative++;
        }
    }

    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

    if(count == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    return 0;
}
