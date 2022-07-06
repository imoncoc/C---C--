#include<iostream>
using namespace std;
int main()
{
    int num[4][4]={1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1};
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m;
		cin>>n>>m;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
			    cout<<num[i%4][j%4];
			    if(i != n-1 || j != m-1){
                    cout<<" ";
			    }
			}
			cout<<endl;
		}
	}
	return 0;
}
