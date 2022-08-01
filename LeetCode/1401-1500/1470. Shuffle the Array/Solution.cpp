class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int i=0, j=n;
        for(int k=0; k<2*n; k++) {
            if(k%2 == 0) {
                res.push_back(nums[i]);
                i++;
            }   else if(k%2 != 0) {
                res.push_back(nums[j]);
                j++;
            }
        }
        return res;
    }
};