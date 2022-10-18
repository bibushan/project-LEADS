#include <iostream>

using namespace std;

int solve() {
  int n, k;
  cin >> n >> k;
  while (k--) {
    if (n % 10 == 0)
      n /= 10;
    else
      n -= 1;
  }
  return n;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << endl;
  return 0;
}