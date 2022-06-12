#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if ((b - a) % 3 == 2)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
