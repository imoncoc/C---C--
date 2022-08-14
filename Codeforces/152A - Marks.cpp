
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        string a;
        cin>>a;

        string b;
        cin>>b;


        sort(a.begin(),a.end(),greater<char>());
        sort(b.begin(),b.end(),greater<char>());

        int lb=0;
        int ub=0;
        string c;
        while(!a.empty() and !b.empty())
        {
            bool har=b.back()<a.back();

            if(har and ub==k)
            {
                har=0;
            }
            if(!har and lb==k)
            {
                har=1;
            }

            if(!har)
            {
                c.push_back(a.back());
                lb++;
                ub=0;
                a.pop_back();
            }
            else
            {
                c.push_back(b.back());
                ub++;
                lb=0;
                b.pop_back();
            }
        }

        cout<<c<<endl;
    }

}
