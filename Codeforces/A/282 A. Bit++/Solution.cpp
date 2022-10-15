#include <iostream>
using namespace std;

int solve() {
  int n, x = 0;
  cin >> n;
  string st[n];
  for (int i = 0; i < n; i++) {
    cin >> st[i];
    if ((st[i] == "++X") || (st[i] == "X++"))
      x++;
    else if ((st[i] == "--X") || (st[i] == "X--"))
      x--;
  }
  return x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << "\n";
  return 0;
}