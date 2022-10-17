#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int solve() {
  int n, count = 0;
  cin >> n;
  string str;
  cin >> str;
  for (int i = 0; i < n; i++) {
    if (str[i] == str[i + 1])
      count++;
  }
  return count;
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << endl;
  ;
  return 0;
}