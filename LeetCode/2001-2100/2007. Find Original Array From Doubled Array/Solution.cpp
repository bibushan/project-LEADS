class Solution {
public:
  vector<int> findOriginalArray(vector<int> &changed) {
    vector<int> result;
    int n = changed.size();
    if (n % 2 == 1)
      return result;
    map<int, int> mp;
    for (auto x : changed)
      mp[x]++;
    sort(changed.begin(), changed.end());
    for (auto x : changed) {
      if (mp[x] == 0)
        continue;
      if (mp[2 * x] == 0)
        return {};
      if (mp[x] && mp[2 * x]) {
        mp[2 * x]--;
        result.push_back(x);
        mp[x]--;
      }
    }

    return result;
  }
};