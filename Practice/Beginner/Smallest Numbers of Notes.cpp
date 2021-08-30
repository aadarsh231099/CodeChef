//https://www.codechef.com/submit/FLOW005
#include <bits/stdc++.h>
using namespace std;
void solve()
{
long long n,rem=0,c=0;
cin>>n;
 /* c=n/100;
  rem=n%100;
  c=c+rem/50;
  rem=rem%50;
  c=c+rem/10;
  rem=rem%10;
  c=c+rem/5;
  rem=rem%5;
  c=c+rem/2;
  rem=rem%2;
  c=c+rem/1;
  rem=rem%1;
  cout<<c<<endl; */
long long a[6]={100,50,10,5,2,1};
for(int i=0;i<6;i++)
{
  c=c+n/a[i];
  n=n%a[i];
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
