class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int maxVal = INT_MIN;
        int minDist = INT_MAX;

        for(int i=0; i<n; i++) {
            int currDist = abs(0 - nums[i]);

            if(currDist <= minDist) {
                if(currDist == minDist) maxVal = max(maxVal, nums[i]);
                else maxVal = nums[i];
                minDist = currDist;
            }
        }

        return maxVal;
    }
};