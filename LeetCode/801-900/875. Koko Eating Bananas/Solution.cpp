class Solution {

  bool isPossible(vector<int> &piles, int k, int h) {
    int total = 0;
    for (int i = 0; total <= h && i < piles.size(); ++i) {
      total += (piles[i] + k - 1) / k;
    }
    return total <= h;
  }

public:
  int minEatingSpeed(vector<int> &piles, int h) {
    int max = *max_element(piles.begin(), piles.end());
    if (h == piles.size())
      return max;
    int low = 1;
    int high = max;
    int mid;
    while (low < high) {
      mid = low + (high - low) / 2;
      if (isPossible(piles, mid, h)) {
        high = mid;
      } else {
        low = mid + 1;
      }
    }

    return low;
  }
};