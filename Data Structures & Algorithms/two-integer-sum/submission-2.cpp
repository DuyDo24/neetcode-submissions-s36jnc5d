class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> prevMap;

        for (int i = 0; i < n; i++) {
            int realtarget = target - nums[i];
            if (prevMap.find(realtarget) != prevMap.end()){
                return {prevMap[realtarget], i };
            }
            prevMap.insert({nums[i], i});
        }
    return {};
    }
};
