class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxdist = 0;
        int l = 0;
        int r = heights.size()-1;

        while (l < r){
            int length = r - l;
            int height = min(heights[r], heights[l]);
            int temp = length * height;
            maxdist = max(maxdist, temp);
            if (heights[l] > heights[r]){
                r--;
            } else{
                l++;
            }
        }
        return maxdist;
    }
};
