#include <iostream>

using namespace std;

string solve() {
  string str, ans;
  cin >> str;
  int low = 0;
  for (char c : str) {
    if (islower(c))
      low++;
  }
  if (low >= str.size() - low) {
    for (char c : str) {
      ans += tolower(c);
    }
  } else {
    for (char c : str) {
      ans += toupper(c);
    }
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << endl;
  return 0;
}