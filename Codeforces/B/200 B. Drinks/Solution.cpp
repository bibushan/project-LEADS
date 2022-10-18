#include <iomanip>
#include <iostream>

using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  double ans = 0.00, sum = 0.00;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  ans = sum / n;
  cout << fixed << setprecision(12) << ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  solve();
  return 0;
}