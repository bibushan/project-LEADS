#include <iostream>
#include <set>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    set<char> set;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        set.insert(b[i]);
      }
    }
    cout << set.size() << endl;
  }
  return 0;
}
