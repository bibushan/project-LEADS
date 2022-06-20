class Solution {
  public List<List<String>> suggestedProducts(String[] products,
                                              String searchWord) {
    Arrays.sort(products);
    List<List<String>> ans = new ArrayList<List<String>>();
    int ind = 1;
    int l = searchWord.length();
    int pl = products.length;
    while (ind <= l) {
      List<String> temp = new ArrayList<String>();
      int pointer = 0;
      String sub = searchWord.substring(0, ind);
      while (temp.size() < 3 && pointer < pl) {
        if ((products[pointer]).indexOf(sub) == 0)
          temp.add(products[pointer]);
        pointer++;
      }
      ans.add(temp);
      ind++;
      if (temp.size() == 0)
        break;
    }
    while (ind <= l) {
      List<String> temp = new ArrayList<String>();
      ans.add(temp);
      ind++;
    }
    return ans;
  }
}