class Solution {
    public int[] decompressRLElist(int[] nums) {
        int size = 0;
        for(int i=0; i<nums.length; i+=2) {
            size += nums[i];
        }
        
        int res[] = new int[size];
        int start = 0;
        
        for(int i=0; i<nums.length; i+=2) {
            Arrays.fill(res, start, start+nums[i], nums[i+1]);
            start += nums[i];
        }
        
        return res;
    }
}