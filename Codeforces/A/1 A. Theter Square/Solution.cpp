#include <cmath>
#include <iostream>

using namespace std;

long long solve() {
  double m, n, a;
  cin >> n >> m >> a;
  return ceil(n / a) * ceil(m / a);
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << "\n";
}