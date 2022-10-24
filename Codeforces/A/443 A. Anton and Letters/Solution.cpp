#include <iostream>
#include <set>
using namespace std;

const int extra = 1e9;

void solve() {
  string s;
  set<char> a;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z')
      a.insert(s[i]);
  }
  cout << a.size() << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  solve();
  return 0;
}