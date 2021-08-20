//https://www.codechef.com/START9C/problems/BUS
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,m,q,s=0,c=0;
  cin>>n>>m>>q;
  int arr[];
  for(int i=0;i<q;i++)
  { int a;
    char ch;
   cin>>ch>>a;
   if(ch=='+')
    s=s+1;
   else
    s=s-1;
  if(s>m)
    c--;
  if(ch=='+')
    arr[a]=arr[a]+a;
  else
    {
      arr[a]=arr[a]-a;
      if(arr[a]<0) 
        c--;
    }
  }
  if(c<0)
    cout<<"Inconsistent"<<endl;
  else
    cout<<"Consistent"<<endl;
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