#include <iostream>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) {
    if (k > i) {
      k -= i;
    } else {
      cout << string(n - i - 1, 'a') << 'b' << string(i - k, 'a') << 'b'
           << string(k - 1, 'a') << "\n";
      return;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    solve();
  }
  return 0;
}