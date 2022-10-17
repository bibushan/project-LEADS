#include <bits/stdc++.h>

using namespace std;

string solve() {
  string str;
  cin >> str;
  set<int> st;
  for (int i = 0; i < str.size(); i++)
    st.insert(str[i]);
  int size = st.size();
  if (size % 2 == 1)
    return "IGNORE HIM!";
  else if (size % 2 == 0)
    return "CHAT WITH HER!";
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << endl;
  ;
  return 0;
}
