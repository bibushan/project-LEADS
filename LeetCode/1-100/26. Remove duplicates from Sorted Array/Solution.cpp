class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, index=0;
        for(i=0; i<nums.size(); i++)
        {
            if(nums[i] != nums[index])
            {
                index++;
                nums[index]=nums[i];
            }
        }
        return index+1;
    }
};
