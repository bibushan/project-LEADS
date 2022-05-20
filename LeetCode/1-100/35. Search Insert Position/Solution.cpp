class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(h>=l)
        {
            int mid=(l+h)/2;
            if(target==nums[mid])
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return l;
    }
};
