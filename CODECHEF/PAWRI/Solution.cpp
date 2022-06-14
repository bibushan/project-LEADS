#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    for (long long int i = 0; i + 4 < s.length(); i++) {
      if (s.substr(i, 5) == "party") {
        s[i + 2] = 'w';
        s[i + 3] = 'r';
        s[i + 4] = 'i';
      }
    }
    cout << s << endl;
  }
  return 0;
}
