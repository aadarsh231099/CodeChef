//https://www.codechef.com/problems/REMOVEBAD
//Remove Bad elements
#include <bits/stdc++.h>
using namespace std;
int min_operations(vector<int> A) {
    unordered_map<int, int> freq;
    for (int a : A) {
        freq[a]++;
    }
    int most_freq = max_element(freq.begin(), freq.end(), [](auto &p1, auto &p2){
        return p1.second < p2.second;
    })->second;
    return A.size() - most_freq;
}
void solve(){
    int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << min_operations(A) << endl;
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