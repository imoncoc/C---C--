#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=1; i<=n; i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int t1=fact(10-n);
        int t2=fact(10-n-2) *2;
        int ans=t1/t2;
        cout << ans*6 << endl;
    }
    return 0;
}
