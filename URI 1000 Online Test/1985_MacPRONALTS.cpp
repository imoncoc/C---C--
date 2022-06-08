#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n, product, item;
    double sum = 0;

    cin>>n;
    while (n--){
        cin>>product>>item;

         if(product == 1001){
            sum += item * 1.5;
         }else if(product == 1002){
             sum += item * 2.5;
         }else if(product == 1003){
             sum += item * 3.5;
         }else if(product == 1004){
             sum += item * 4.5;
         }else if(product == 1005){
             sum += item * 5.5;
         }
         }

    cout<<fixed<<setprecision(2)<<sum<<endl;

return 0;
}
