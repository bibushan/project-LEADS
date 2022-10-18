#include <iostream>

using namespace std;

string solve() {
  int n, t, flag = 0;
  cin >> n >> t;
  string str;
  cin >> str;
  char temp;
  while (t--) {
    flag = 0;
    for (int i = 0; i < n - 1; i++) {
      if (flag == 1) {
        flag = 0;
        continue;
      }
      if (str[i] == 'B' && str[i + 1] == 'G') {
        temp = str[i + 1];
        str[i + 1] = str[i];
        str[i] = temp;
        flag = 1;
      } else
        flag = 0;
    }
  }
  return str;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << endl;
  return 0;
}