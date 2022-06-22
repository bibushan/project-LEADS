class Solution {
  public int furthestBuilding(int[] heights, int bricks, int ladders) {
    PriorityQueue<Integer> queue = new PriorityQueue<>();
    int next;
    for (int i = 0; i < heights.length - 1; i++) {
      next = heights[i + 1] - heights[i];
      if (next > 0) {
        queue.add(next);
        if (queue.size() > ladders) {
          bricks -= queue.poll();
          if (bricks < 0)
            return i;
        }
      }
    }
    return heights.length - 1;
  }
}