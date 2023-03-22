//https://www.codechef.com/problems/REMOVECARDS
//Card Removal
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
        cin >> n;
        vector<int> cards(n);
        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }
        sort(cards.begin(), cards.end()); 
        int ans = n; 
        for (int i = 0; i < n; i++) {
            int cnt = 1;
            while (i+1 < n && cards[i] == cards[i+1]) {
                cnt++; 
                i++;
            }
            ans = min(ans, n-cnt); 
        }
        cout << ans << endl;
  
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