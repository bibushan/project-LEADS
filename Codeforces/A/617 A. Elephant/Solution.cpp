#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int x;
  cin >> x;
  cout << x / 5 + (((x % 5) > 0) ? 1 : 0) << "\n";
  return 0;
}