/*Runtime: 1 ms, faster than 86.01% of Java online submissions for Count Elements With Strictly Smaller and Greater Elements .
Memory Usage: 42.5 MB, less than 29.56% of Java online submissions for Count Elements With Strictly Smaller and Greater Elements .*/

class Solution {
    public int countElements(int[] nums) {
        int min = nums[0], max = nums[0];
        for(int current: nums){
            if(current < min)
                min = current;
            if(current > max)
                max = current;
        }
        
        int count=0;
        for(int current: nums)
            if(current==min || current==max)
                count++;
        
        return nums.length-count;
    }
}