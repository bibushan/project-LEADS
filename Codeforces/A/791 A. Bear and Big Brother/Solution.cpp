#include <algorithm>
#include <iostream>


using namespace std;

int solve() {
  int a, b, count = 0;
  cin >> a >> b;
  while (a <= b) {
    a = 3 * a;
    b = 2 * b;
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