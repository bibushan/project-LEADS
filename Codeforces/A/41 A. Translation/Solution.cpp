#include <iostream>
#include <set>
using namespace std;

const int extra = 1e9;

void solve() {
  string a, b;
  int pas = 0;
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[a.size() - 1 - i]) {
      pas++;
    }
  }
  if (pas > 0) {
    cout << "NO";
  } else {
    cout << "YES";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  solve();
  return 0;
}