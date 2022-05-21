class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=0;
        int size=digits.size();
        for(int j=size-1; j>=0; j--){
            if(digits[j]<9){
                digits[j]++;return digits;
            }
            else
                digits[j]=0;
        }
        
        vector<int> arr(size+1,0);
        arr[0]=1;
        return arr;
    }
};
