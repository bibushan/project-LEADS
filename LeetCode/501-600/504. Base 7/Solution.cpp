class Solution {
public:
  string convertToBase7(int num) {
    string x = "";
    int temp = 0;
    if (num < 0) {
      temp = -1 * num;
    } else {
      temp = num;
    }
    vector<int> ans;
    while (temp >= 7) {
      int a = temp % 7;
      ans.push_back(a);
      temp /= 7;
    }
    ans.push_back(temp);
    for (int i = 0; i < ans.size(); i++) {
      string m = to_string(ans[i]);
      x += m;
    }
    reverse(x.begin(), x.end());
    if (num < 0) {
      x.insert(x.begin(), '-');
    }
    return x;
  }
};