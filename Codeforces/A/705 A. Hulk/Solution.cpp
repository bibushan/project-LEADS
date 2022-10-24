#include <iostream>
#include <set>
using namespace std;

const int extra = 1e9;

void solve() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    if (i % 2 == 0) {
      cout << "I hate ";
    } else {
      cout << "I love ";
    }
    if (i != a - 1) {
      cout << "that ";
    } else {
      cout << "it ";
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  solve();
  return 0;
}