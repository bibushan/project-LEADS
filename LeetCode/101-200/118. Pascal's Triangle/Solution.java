class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        List<Integer> temp1 = new ArrayList<>(Arrays.asList(1));
        List<Integer> temp2 = new ArrayList<>(Arrays.asList(1, 1));
        result.add(temp1);
        if(numRows == 1)
            return result;
        result.add(temp2);
        for(int i=2; i<numRows; i++) {
            List<Integer> temp = new ArrayList<>();
            temp.add(1);
            for(int j=1; j<i; j++) {
                temp.add(result.get(i-1).get(j-1) + result.get(i-1).get(j));
            }
            temp.add(1);
            result.add(temp);
        }
        return result;
    }
}