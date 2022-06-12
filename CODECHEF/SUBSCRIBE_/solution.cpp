#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, n, a, b;
    cin >> n >> x;
    a = n / 6;
    b = n % 6;
    if (n < 6)
      cout << x << endl;
    else if (b == 0)
      cout << a * x << endl;
    else
      cout << (a + 1) * x << endl;
  }
  return 0;
}
