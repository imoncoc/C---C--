#include<iostream>
using namespace std;
int main(){
    int hour, minites;
    char c;
    while(cin>>hour>>c>>minites){
            int sum = 0;


        if(hour >= 7){
            sum = (hour - 7) * 60 + minites;
        }
    cout<<"Atraso maximo: "<<sum<<endl;
    }




return 0;
}
