#include <iostream>

using namespace std;

int main() {

    int a,b;

    while(cin>>a>>b){
        int sum = 0;
        sum = abs(a - b);
        if(sum == 0){
            sum = 1;
        }

    cout<<sum - 1<<endl;
    }
    return 0;
}
