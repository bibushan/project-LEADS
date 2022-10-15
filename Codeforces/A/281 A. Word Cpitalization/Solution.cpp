#include <cctype>
#include <iostream>


using namespace std;

string solve() {
  string str;
  cin >> str;
  string ans = "";
  ans += toupper(str[0]);
  for (int i = 1; i < str.size(); i++)
    ans += str[i];
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  solve();
  return 0;
}