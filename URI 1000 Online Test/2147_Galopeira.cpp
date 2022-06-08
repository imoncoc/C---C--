#include<iostream>
#include<cstring>
#include<iomanip>
#include <string.h>
using namespace std;
int main(){
   int n;

   cin>>n;
   while(n--){
        char myString[100001];
    cin>>myString;
    cout<<fixed<<setprecision(2)<<strlen(myString) * 0.01<<endl;
   }


return 0;
}
