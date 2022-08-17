class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] res = new int[nums.length];
        int i=0, j=0, count=0;
        while(i < nums.length) {
            if(nums[i] > nums[j])
                count++;
            j++;
            if(j == nums.length) {
                res[i] = count;
                count = 0;
                i++;
                j=0;
            }
        }
        return res;
    }
}