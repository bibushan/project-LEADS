#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n][3], sol = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    int known = 0;
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] == 1)
        known++;
    }
    if (known >= 2)
      sol++;
  }
  cout << sol << endl;
  return 0;
}