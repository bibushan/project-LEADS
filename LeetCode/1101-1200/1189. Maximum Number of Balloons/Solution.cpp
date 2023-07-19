
class Solution {
public:
  int maxNumberOfBalloons(string text) {
    map<char, int> mp;
    for (char c : text)
      mp[c]++;

    map<char, int> count;
    for (char c : std::string("balloon"))
      count[c]++;

    int res = text.length();
    for (const auto &c : count) {
      res = min(res, mp[c.first] / c.second);
    }

    return res;
  }
};