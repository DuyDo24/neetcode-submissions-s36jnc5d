class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int maxValue;

        while (l < r){
            maxValue = max(maxValue , (min(heights[l], heights[r])) * (r - l));
            if (heights[l] > heights[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return maxValue;
    }
};
