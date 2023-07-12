/*
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
  vector<int> replaceElements(vector<int> &arr) {
    int high = -1, temp;
    for (int i = arr.size() - 1; i >= 0; i--) {
      temp = arr[i];
      arr[i] = high;
      high = max(high, temp);
    }
    return arr;
  }
};

/*
    Brute Force O(n^2)
    class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int high = -1;
        for(int i=0; i<arr.size(); i++) {
            for(int j=i+1; j<arr.size(); j++) {
                high = max(high, arr[j]);
            }
            arr[i] = high;
            high = -1;
        }
        return arr;
    }
};
*/