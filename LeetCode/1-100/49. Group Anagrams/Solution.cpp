class Solution {
public:
  string getKey(string str) {
    vector<int> count(26);
    for (int j = 0; j < str.size(); j++) {
      count[str[j] - 'a']++;
    }

    string key = "";
    for (int i = 0; i < 26; i++) {
      key.append(to_string(count[i] + 'a'));
    }
    return key;
  }

  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < strs.size(); i++) {
      string key = getKey(strs[i]);
      mp[key].push_back(strs[i]);
    }

    vector<vector<string>> res;
    for (auto it : mp) {
      res.push_back(it.second);
    }
    return res;
  }
};