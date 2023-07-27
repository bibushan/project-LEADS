/*
    Time Complexity: O(n logn)
    Space Complexity: O(n)
*/

class Solution {
public:
  static bool cmprtr(string a, string b) {
    if (a + b > b + a)
      return true;
    else
      return false;
  }

  string largestNumber(vector<int> &nums) {
    vector<string> res;
    for (int i : nums) {
      res.push_back(to_string(i));
    }
    sort(res.begin(), res.end(), cmprtr);

    if (res[0] == "0") {
      return "0";
    }

    string s = "";
    for (string n : res) {
      s += n;
    }
    return s;
  }
};