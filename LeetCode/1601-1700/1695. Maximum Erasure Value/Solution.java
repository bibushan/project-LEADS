class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        int i=0, j=0, cur_sum=0, output=0;
        HashSet<Integer> set = new HashSet();
        while(j<nums.length){
            while(set.contains(nums[j])==true){
                set.remove(nums[i]);
                cur_sum-=nums[i];
                i++;
            }
            set.add(nums[j]);
            cur_sum+=nums[j];
            j++;
            output = Math.max(cur_sum, output);
        }
        
        return output;
    }
}