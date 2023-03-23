//https://www.codechef.com/problems/MINLCS
//Minimise LCS
#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n,c=0;
   string a,b;
   cin>>n>>a>>b;
   map<char,int> j,k;
   for(char i:a) 
   {
       j[i]++;
   }
   for(char i:b) {
       k[i]++;
   }
   for(char i='a';i<='z';++i)
   {
      int p=max(c,min(j[i],k[i]));
      c=p;
   }
   cout<<c<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}