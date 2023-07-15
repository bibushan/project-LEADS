/*
    Time Complexity: O(N + M)
    Space Complexity: O(N)
*/

class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    map<int, int> mp;
    for (int i = 0; i < nums1.size(); i++) {
      mp[nums1[i]] = i;
    }
    vector<int> res(nums1.size(), -1);
    stack<int> s;
    for (int i = 0; i < nums2.size(); i++) {
      int curr = nums2[i];
      while (!s.empty() && curr > s.top()) {
        int rem = s.top();
        s.pop();
        res[mp[rem]] = curr;
      }
      if (mp.find(curr) != mp.end()) {
        s.push(curr);
      }
    }
    return res;
  }
};

/*
    Time Complexity: O(N^2)
    Space Complexity: O(N)
*/
class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    map<int, int> mp;
    for (int i = 0; i < nums1.size(); i++) {
      mp[nums1[i]] = i;
    }
    vector<int> res(nums1.size(), -1);
    for (int i = 0; i < nums2.size(); i++) {
      if (mp.find(nums2[i]) == mp.end())
        continue;
      else {
        bool inserted = false;
        for (int j = i + 1; j < nums2.size(); j++) {
          if (nums2[i] < nums2[j]) {
            res[mp[nums2[i]]] = nums2[j];
            break;
          }
        }
      }
    }
    return res;
  }
};