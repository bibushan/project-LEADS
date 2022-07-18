class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int n = nums.length;
        int result = 0;
        int diff = Integer.MAX_VALUE;
        Arrays.sort(nums);
        for(int index1=0; index1 < n-2; index1++) {
            int index2 = index1 + 1;
            int index3 = n - 1;
            while(index2 < index3) {
                int sum = nums[index1] + nums[index2] + nums[index3];
                if(sum < target)
                    index2++;
                else if(sum == target)
                    return target;
                else
                    index3--;
                
                if(Math.abs(sum - target) < diff) {
                    result = sum;
                    diff = Math.abs(sum - target);
                }
            }
        }
        return result;
    }
}