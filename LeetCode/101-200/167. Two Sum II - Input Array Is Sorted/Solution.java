/*Runtime: 3 ms, faster than 31.42% of Java online submissions for Two Sum II - Input Array Is Sorted.
Memory Usage: 50.1 MB, less than 37.47% of Java online submissions for Two Sum II - Input Array Is Sorted.*/

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n = numbers.length;
        int[] result = new int[2];
        int high=n-1, low=0;
        int sum=numbers[low] + numbers[high];
        while(target!=sum){
            if(sum<target) low++;
            else high--;
            sum = numbers[low] + numbers[high];
        }
        result[0]=low+1;
        result[1]=high+1;

        return result; 
    }
}


/*Runtime: 1 ms, faster than 99.22% of Java online submissions for Two Sum II - Input Array Is Sorted.
Memory Usage: 45.3 MB, less than 81.26% of Java online submissions for Two Sum II - Input Array Is Sorted.*/

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n = numbers.length;
        int high=n-1, low=0;
        int sum=numbers[low] + numbers[high];
        while(target!=sum){
            if(sum<target) low++;
            else high--;
            sum = numbers[low] + numbers[high];
        }

     return new int[]{low + 1, high + 1};
    }
}