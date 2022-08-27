class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res;
        for (int i = sqrt(area); i > 0; i--){
            if (area % i == 0){
                res.push_back(area/i);
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};