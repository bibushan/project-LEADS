#include <iostream>
#include <vector>

using namespace std;

int solve() {
  int n, k, temp;
  cin >> n >> k;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  k = vec[k - 1];
  for (int i = 0; i < n; ++i) {
    if (vec[i] < k || vec[i] < 1) {
      return i;
    }
  }
  return n;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << "\n";
}