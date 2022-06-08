#include<bits/stdc++.h>
using namespace std;
int main(){


    while(true){
            long long sum = 0;
        int n;
        cin>>n;
        if(n == 0){
            break;
        }

        for(int i  = 0; i < n; i++){
            int num;
            cin>>num;
            cin.ignore();
            string str;
            getline(cin, str);

            if (str == "suco de laranja"){
                sum += (num * 120);
            }else if(str == "morango fresco" || str == "mamao"){
                sum += (num * 85);
            }else if(str == "goiaba vermelha"){
                sum += (num * 70);
            }else if(str == "manga"){
                sum += (num * 56);
            }else if(str == "laranja"){
                sum += (num * 50);
            }else if(str == "brocolis"){
                sum += (num * 34);
            }
        }

        if (sum > 130){
            cout<<"Menos "<<sum - 130<<" mg"<<endl;
        }else if(sum < 110){
           cout<<"Mais "<<110 - sum<<" mg"<<endl;
        }else{
            cout<<sum<<" mg"<<endl;
        }
    }





    return 0;
}
