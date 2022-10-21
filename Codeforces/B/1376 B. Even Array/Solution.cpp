#include <iostream>

using namespace std;

int solve() {
  int n, odd = 0, even = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if ((arr[i] % 2) != (i % 2)) {
      if (i % 2 == 1)
        odd++;
      else
        even++;
    }
  }
  if (odd != even)
    return -1;
  else
    return even;
}

int main() {
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cout << solve() << endl;
  }
  return 0;
}