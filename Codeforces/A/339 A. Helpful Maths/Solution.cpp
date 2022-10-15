#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string solve() {
  string a;
  cin >> a;
  vector<int> vec;
  for (int i = 0; i < a.size(); i = i + 2) {
    vec.push_back(a[i] - '0');
  }
  sort(vec.begin(), vec.end());
  cout << vec[0];
  for (int i = 1; i < vec.size(); i++) {
    cout << "+" << vec[i];
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  solve();
  return 0;
}