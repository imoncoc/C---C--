#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string p,h,n;
        cin>>p>>h;
        int n1=p.size(),n2=h.size();
        sort(begin(p),end(p));
        bool f=false;
        for(int i=0;i<=n2-n1;i++)
        {
            n=h.substr(i,n1);
            //cout<<"n 1: "<<n<<endl;
            sort(begin(n),end(n));
            //cout<<"n 2: "<<n<<endl;
            if(p==n)
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
    }



    return 0;


    return 0;
}
