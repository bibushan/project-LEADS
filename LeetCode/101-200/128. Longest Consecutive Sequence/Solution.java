// Time Complexity : O(N)
// Space Complexity: O(n)
class Solution {
    public int longestConsecutive(int[] nums) {
        HashMap<Integer, Boolean> map = new HashMap<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            map.put(nums[i], true);
        }
        for (Integer num : map.keySet()) {
            if (map.containsKey(num - 1))
                map.put(num, false);
        }
        int res = 0;
        for (Integer num : map.keySet()) {
            int len = 1;
            if (map.get(num) == true) {
                int idx = num + 1;
                while (map.containsKey(idx)) {
                    len++;
                    idx++;
                }
            }
            res = Math.max(res, len);
        }

        return res;
    }
}

/*
 * Time Complexity : O(N), Although the time complexity appears to be quadratic
 * due to the while loop nested
 * within the for loop, closer inspection reveals it to be linear. Because the
 * while loop is reached only when
 * marks the beginning of a sequence (i.e. currentNumber-1 is not present in
 * nums), the while loop can only run
 * for N iterations throughout the entire runtime of the algorithm. This means
 * that despite looking like O(N^2)
 * complexity, the nested loops actually run in O(N+N)=O(N) time. All other
 * computations occur in constant
 * time, so the overall runtime is linear. Where N is the size of the
 * Array(nums).
 * 
 * Space Complexity : O(N), Unordered set space.
 */

class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        int n = nums.length;
        for (int num : nums)
            set.add(num);
        int res = 0;
        for (int num : set) {
            if (!set.contains(num - 1)) {
                int curr = num;
                int len = 1;
                while (set.contains(curr + 1)) {
                    curr++;
                    len++;
                }
                res = Math.max(res, len);
            }
        }
        return res;
    }
}