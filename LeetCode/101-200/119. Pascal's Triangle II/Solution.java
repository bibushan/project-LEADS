class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> answer = new ArrayList<>();
        answer.add(1);
        for(int i=1; i<=rowIndex; i++) {
            List<Integer> result = new ArrayList<>();
            result.add(1);
            for(int j =1; j<=i-1; j++)
                result.add(answer.get(j-1) + answer.get(j));
            result.add(1);
            answer = result;
        }
        
        return answer;
    }
}