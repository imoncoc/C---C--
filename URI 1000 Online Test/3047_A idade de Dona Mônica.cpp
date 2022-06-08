#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int monica = 0, child1 = 0, child2 = 0, child3 = 0;

    if(a > b && a > c){
        monica = a;
        child1 = b;
        child2 = c;
        child3 = monica - (b+c);
    }else if(b > a && b > c){
        monica = b;
        child1 = a;
        child2 = c;
        child3 = monica - (a+c);
    }else{
        monica = c;
        child1 = a;
        child2 = b;
        child3 = monica - (a+b);
    }



     if(child1 > child2 && child1 > child3){
        cout<<child1<<endl;
     }
     else if(child2 > child1 && child2 > child3){
        cout<<child2<<endl;
     }
     else{
        cout<<child3<<endl;
     }

    return 0;
}
