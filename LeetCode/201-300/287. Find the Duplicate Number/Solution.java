class Solution {
    public int findDuplicate(int[] nums) {
        Set<Integer> set = new HashSet<Integer>();
        int target = 0;
        for(int num = 0; num < nums.length; num++) {
            if(set.contains(nums[num]))
                target = nums[num];
            else
                set.add(nums[num]);
        }
        return target;
    }
}