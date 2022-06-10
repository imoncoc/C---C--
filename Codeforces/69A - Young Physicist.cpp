#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a = 0, b = 0, c = 0;
    int ansA = 0, ansB = 0, ansC = 0;

    for(int i = 0; i < n; i++){
        cin>>a>>b>>c;
        ansA += a;
        ansB += b;
        ansC += c;
    }

    //cout<<"ansA: "<<ansA<<endl;
    //cout<<"ansB: "<<ansB<<endl;
    //cout<<"ansC: "<<ansC<<endl;

    if(ansA == 0 && ansB == 0 && ansC == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    return 0;
}
