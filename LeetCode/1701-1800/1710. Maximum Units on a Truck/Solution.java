class Solution {
  public int maximumUnits(int[][] boxTypes, int truckSize) {
    Arrays.sort(boxTypes, (a, b) -> b[1] - a[1]);
    int totalUnits = 0;
    int loadedBoxes = 0;
    for (int i = 0; i < boxTypes.length; i++) {
      int number = boxTypes[i][0];
      while (loadedBoxes < truckSize && number > 0) {
        totalUnits += boxTypes[i][1];
        number--;
        loadedBoxes++;
      }
    }
    return totalUnits;
  }
}