#include <iostream>
#include <set>

using namespace std;

string solve() {
  string s, ans;
  char temp;
  set<char> vowels({'a', 'e', 'i', 'o', 'u', 'y'});
  cin >> s;
  for (auto curr : s) {
    temp = tolower(curr);
    if (vowels.find(temp) == vowels.end()) {
      ans += ".";
      ans += temp;
    }
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << "\n";
  return 0;
}