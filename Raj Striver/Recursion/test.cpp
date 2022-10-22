
// A C++ program to demonstrate working of
// recursion
#include <bits/stdc++.h>
using namespace std;

void printFun(int test){
    cout<<test<<" ";
    printFun(test);

}

// Driver Code
int main(){
    int n;
    cin>>n;
    printFun(n);
}
