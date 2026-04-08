class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int length = numbers.size();
        int l = 0;
        int r = length - 1;

        while (numbers[l] + numbers[r] != target){
            if (numbers[l] + numbers[r] > target){
                r--;
            }
            if (numbers[l] + numbers[r] < target){
                l++;
            }
        }
    return {l+1, r+1};
    }
};
