#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   getline(cin,s);
   int n=0;
   for(int i=1; i<(s.size()-1) ; i++)
   {
      if(s[i] >= 'a' && s[i] <= 'z')
      {
         n++;
         for(int j=1 ; j<i ; j++)
         {
            if(s[i] ==  s[j])
            {
               n--;
               break;
            }
         }
      }
   }

   cout << n;
}
