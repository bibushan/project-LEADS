#include <cmath>
#include <iostream>


using namespace std;

string solve() {
  string str;
  cin >> str;
  int luckyDigit = 0;
  for (int i = 0; i < str.size(); i++) {
    if ((str[i] == '4') || (str[i] == '7'))
      luckyDigit++;
  }
  if ((luckyDigit == 7) || (luckyDigit == 4))
    return "YES";
  else
    return "NO";
}

int main() {
  ios_base::sync_with_stdio(false);
  cout << solve() << "\n";
}