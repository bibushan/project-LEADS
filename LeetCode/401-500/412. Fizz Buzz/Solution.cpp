class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);

        for(int i = 0; i < n; ++i){
            if((i+1)%15 == 0){
                answer[i] = "FizzBuzz";
            }else if((i+1)%3 == 0){
                answer[i] = "Fizz";
            }else if((i+1)%5 == 0){
                answer[i] = "Buzz";
            }else{
                answer[i] = to_string(i+1);
            }
        }

        return answer;
    }
};
