class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0 ;
        int r = height.size() - 1;

        int maxl = height[l];
        int maxr = height[r];
        int water = 0;

        while (l < r){
            if (maxl < maxr){
                l++;
                maxl = max(height[l], maxl);
                water += maxl - height[l];
            } else{
                r--;
                maxr = max(height[r], maxr);
                water += maxr - height[r];
            }
        }
        return water;
    }
};
