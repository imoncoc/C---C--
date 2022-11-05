#include<iostream>
using namespace std;
int main(){
    int red, blue;
    cin>>red>>blue;

    int differentPair = min(red, blue);

    int remain = max(red, blue) - differentPair;
    int samePair = remain / 2;

    cout<<differentPair<<" "<<samePair;
}
