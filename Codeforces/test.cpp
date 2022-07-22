#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin>>n>>m;

  vector<int>v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];

  }
  int pos=1;
  int next;
  while(pos<m){
    next=pos+v[pos-1];
    pos=next;
    cout<<"pos: "<<pos<<endl;
  }

  if(pos==m){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

}
