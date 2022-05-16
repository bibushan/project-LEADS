class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1, area=0, temp=0;
        while(i<=j){
            if(height[i]<=height[j])
            {
                temp=height[i]*(j-i);
                i++;
            }
            else
            {
                temp=height[j]*(j-i);
                j--;
            }
            if(temp>area)
            {
                area=temp;
            }
        }
        
        return area;
    }
};
