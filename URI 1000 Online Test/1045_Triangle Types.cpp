#include<bits/stdc++.h>

using namespace std;
int main(){
    double a,b,c;
    double arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];


     int n = sizeof(arr) / sizeof(arr[0]);

     sort(arr, arr + n);
     a = arr[2];
     b = arr[1];
     c = arr[0];

    //cout<<fixed<<setprecision(1)<<"a : "<<a<<", b : "<<b<<" c: "<<c<<endl;

    if( (a >= b+c) || (b >= a+c) || (c >= b+a) ){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    if( pow(a,2) ==  (pow(b, 2) + pow(c, 2)) || pow(b,2) ==  (pow(a, 2) + pow(c, 2)) ||
       pow(c,2) ==  (pow(b, 2) + pow(a, 2)) ){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if( pow(a,2) >  (pow(b, 2) + pow(c, 2)) || pow(b,2) >  (pow(a, 2) + pow(c, 2)) ||
       pow(c,2) >  (pow(b, 2) + pow(a, 2)) ){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if( pow(a,2) <  (pow(b, 2) + pow(c, 2)) || pow(b,2) <  (pow(a, 2) + pow(c, 2)) ||
       pow(c,2) <  (pow(b, 2) + pow(a, 2)) ){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a == b && b == c){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if( (a == b && a != c) || (b == c && a != b) || (a == c && a != b) ){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }



    return 0;
}
