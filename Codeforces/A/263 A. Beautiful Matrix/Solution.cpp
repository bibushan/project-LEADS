#include <iostream>
using namespace std;

int solve() {
  int temp, x, y;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> temp;
      if (temp == 1) {
        x = i;
        y = j;
      }
    }
  }
  return abs(x - 2) + abs(y - 2);
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << "\n";
  return 0;
}