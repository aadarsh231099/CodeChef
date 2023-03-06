//https://www.codechef.com/problems/AIRHOCKEY
//Air Hockey
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
        cin>>a>> b;

        if (a>=7||b>=7) {
            cout<<"0"<<endl;
        } else {
            int rem=7-max(a,b);
            if (a+rem<= 7) {
                cout<<rem<<endl;
            } else {
                cout <<7-a<<endl;
            }
        }
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