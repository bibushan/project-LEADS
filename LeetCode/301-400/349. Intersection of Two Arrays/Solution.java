class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {

        HashSet<Integer> temp = new HashSet<Integer>();
        for(int i=0; i<nums1.length; i++)
            temp.add(nums1[i]);
        HashSet<Integer> result = new HashSet<Integer>();
        for(int i=0; i<nums2.length; i++)
            if(temp.contains(nums2[i])==true)
                result.add(nums2[i]);
        int[] answer = new int[result.size()];
        int i=0;
        for(Integer x: result)
            answer[i++] = x;
        return answer;
    }
}