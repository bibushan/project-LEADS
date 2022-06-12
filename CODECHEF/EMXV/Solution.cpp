#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, x;
    cin >> x >> n;

    long long ans = (x - 1) * (2 * n - x);
    cout << ans << endl;
  }
  return 0;
}
