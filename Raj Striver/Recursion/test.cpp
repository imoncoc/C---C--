#include<iostream>
using namespace std;
int count = 0;
void f( int n){
    int i = 0;
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    f(n - 1);
    cout<<n<<" ";

}
int main(){
    int test = 3;
    f(test);


    return 0;
}
