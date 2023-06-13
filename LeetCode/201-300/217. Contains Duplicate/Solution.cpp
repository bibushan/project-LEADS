// SET
// Time Complexity: O(n logn)
// Space Complexity: O(n)
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    set<int> set;
    for (int i = 0; i < nums.size(); i++)
      set.insert(nums[i]);
    if (set.size() == nums.size())
      return false;
    else
      return true;
  }
};

// MAP
// Time Complexity: O(n logn)
// Space Complexity: O(n)
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    map<int, int> mp;
    for (auto i : nums)
      mp[i]++;
    bool flag = false;
    for (auto i : mp) {
      if (i.second >= 2)
        return true;
    }
    return flag;
  }
};

// HASHMAP
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> mp;
    for (auto i : nums)
      mp[i]++;
    for (auto i : mp)
      if (i.second > 1)
        return true;
    return false;
  }
};