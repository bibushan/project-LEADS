#include <bits/stdc++.h>

using namespace std;

int solve() {
  int a, b;
  cin >> a >> b;
  int ans = a % b == 0 ? 0 : b - (a % b);
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
    cout << solve() << endl;
  return 0;
}