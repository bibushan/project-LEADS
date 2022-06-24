class Solution {
  public int scheduleCourse(int[][] courses) {
    Arrays.sort(courses, (a, b) -> (a[1] - b[1]));
    Queue<Integer> queue = new PriorityQueue<>((a, b) -> (b - a));
    int times = 0;
    for (int i = 0; i < courses.length; i++) {
      queue.add(courses[i][0]);
      times += courses[i][0];
      if (times > courses[i][1]) {
        times = times - queue.poll();
      }
    }
    return queue.size();
  }
}