#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int num = m/n;
    int last = m % n;
    //cout<<"in num: "<<num<<endl;
    //cout<<"in last: "<<last<<endl;
    if(last > 0){
        cout<<-1<<endl;
        return 0;
    }
    if(num == 1){
        cout<<0<<endl;
        return 0;
    }


    int count = 0;
    for(int i = 0; i < 1000; i++){
            if(num == 1){
                break;
            }
        if(num % 2 == 0){
            count++;
            num /= 2;
        }
        else if(num % 3 == 0){
                count++;
            num /= 3;
        }
        else {
            count = -1;
            break;
        }

        //cout<<"num: "<<num<<endl;
    }

    cout<<count<<endl;





    return 0;
}
