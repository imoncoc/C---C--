#include<iostream>
using namespace std;
bool f(int i, int n, string str){
    if( i >= n/2){
            cout<<"String is Plaindrome."<<endl;
        return true;
    }
    if(str[i] != str[n-i-1]){
        cout<<"String isn't Plaindrome."<<endl;
        return false;
    }
    f(i+1, n, str);
}
int main(){
    string str = "MADAM";
    int n = str.size();


    f(0, n, str);






    return 0;
}
