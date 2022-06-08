#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a, b, sum =0;
    cin>>a>>b;
    sum = 100*(b-a)/a;
    cout << fixed << setprecision(2) << sum<<"%"<<endl;


    return 0;
}
