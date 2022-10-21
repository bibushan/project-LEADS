#include <cmath>
#include <iostream>

using namespace std;

void solve() {
  long long n, ans;
  cin >> n;
  ans = n * (n + 1) / 2;
  long long a = 1;
  while (a <= n) {
    ans -= 2 * a;
    a = a * 2;
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }
  return 0;
}