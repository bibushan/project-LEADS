class NumArray {
public:
  vector<int> prefixSum;
  NumArray(vector<int> &nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      count += nums[i];
      prefixSum.push_back(count);
    }
  }

  int sumRange(int left, int right) {
    int answer = prefixSum[right];

    if (left - 1 >= 0) {
      answer -= prefixSum[left - 1];
    }
    return answer;
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */