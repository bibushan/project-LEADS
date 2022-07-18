class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        List < List <Integer>> result = new ArrayList < > ();
        for(int index1=0; index1 < n-2; index1++) {
            if(index1 > 0 && nums[index1] == nums[index1 - 1])
                continue;
            
            int index2 = index1 + 1;
            int index3 = n - 1;
            while(index2 < index3) {
                int sum = nums[index1] + nums[index2] + nums[index3];
                if(sum == 0) {
                    result.add(Arrays.asList(nums[index1], nums[index2], nums[index3]));
                    index3--;
                    while (index2 < index3 && nums[index3] == nums[index3 + 1]) 
                        index3--;
                }   else if(sum > 0) {
                    index3--;
                }   else {
                    index2++;
                }
            }
        }
        return result;
    }
}