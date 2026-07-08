class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int temp = 0;

        for(int i=0; i<n; i++) {
            if(nums[i] == 1){
                temp++;
                maxi = max(maxi, temp);
            }
            else {
                temp = 0;
            }
        }

        return maxi;
    }
};