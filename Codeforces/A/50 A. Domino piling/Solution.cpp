#include <iostream>

using namespace std;

int solve() {
  int m, n;
  cin >> m >> n;
  return m * n / 2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << "\n";
}