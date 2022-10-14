#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    int len = str.size();
    if (len <= 10) {
      cout << str << endl;
    } else {
      cout << str[0] << len - 2 << str[len - 1] << endl;
    }
  }
  return 0;
}