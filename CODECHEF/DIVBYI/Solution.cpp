#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n % 2 == 1) {
      for (int i = n / 2 + 1, j = n / 2; j > 0; i++, j--)
        cout << i << " " << j << " ";
      cout << n;
    } else
      for (int i = n / 2, j = n / 2 + 1; j <= n; j++, i--)
        cout << i << " " << j << " ";
    cout << endl;
  }
  return 0;
}
