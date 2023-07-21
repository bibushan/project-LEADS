/*
    Time Complexity: O(nlogn)
    Space Complexity: O(n)
*/

class Solution {
public:
  vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {
    vector<vector<int>> res;
    multimap<int, vector<int>> mp;
    for (int i = 0; i < points.size(); i++) {
      mp.insert(make_pair(distance(points[i]), points[i]));
    }
    int count = 0;
    for (const auto &c : mp) {
      res.push_back(c.second);
      count++;
      if (count == k)
        break;
    }
    return res;
  }

  int distance(vector<int> &point) {
    return point[0] * point[0] + point[1] * point[1];
  }
};