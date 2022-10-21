#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
      cin >> b[i];
    sort(b, b + n);
    int i = 0, j = n - 1;
    while (k > 0 && i < n && j >= 0) {
      if (a[i] < b[j]) {
        sum += b[j] - a[i];
        i++;
        j--;
        k--;
      } else
        break;
    }
    cout << sum << "\n";
  }
}