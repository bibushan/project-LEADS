class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        List<Integer>[] counter = new List[nums.length + 1];

        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (!map.containsKey(nums[i])) {
                map.put(nums[i], 0);
            }
            map.put(nums[i], map.get(nums[i]) + 1);
            // map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        Queue<Pair<Integer, Integer>> priority = new PriorityQueue<>(
                (a, b) -> b.getValue() - a.getValue());

        for (int key : map.keySet()) {
            priority.offer(new Pair<Integer, Integer>(key, map.get(key)));
        }

        int[] sum = new int[k];

        for (int i = 0; i < k; i++) {
            sum[i] = priority.poll().getKey();
        }

        return sum;
    }
}