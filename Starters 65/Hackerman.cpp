//https://www.codechef.com/problems/PRIMEDICE
//Hackerman
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void solve(){
    int a,b;
    cin>>a>>b;
    if(is_prime(a+b))cout<<"Alice"<<endl;
    else
    cout<<"Bob"<<endl;
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