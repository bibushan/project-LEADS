#include <algorithm>
#include <iostream>

using namespace std;

int solve() {
  int k, n, w;
  cin >> k >> n >> w;
  return max((k * w * (w + 1)) / 2 - n, 0);
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << endl;
  ;
  return 0;
}