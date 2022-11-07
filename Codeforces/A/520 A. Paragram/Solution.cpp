#include <bits/stdc++.h>

using namespace std;

bool isLetter(char ch) {
  int ascii = int(ch);
  if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
    return true;
  else
    return false;
}

string solve() {
  int n;
  cin >> n;
  if (n < 26)
    return "NO";
  char str[n], temp;
  set<char> res;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    str[i] = temp;
    if (!isLetter(temp))
      return "NO";
    res.insert(tolower(temp));
  }
  if (res.size() < 26)
    return "NO";

  return "YES";
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << endl;
  return 0;
}