class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zeroCnt = 0;
        vector<int> res(n, 0);
        int suffix = 1;
        for(int i=n-1; i>=0; i--) {
            if(nums[i] == 0) {
                zeroCnt++;
                continue;
            }
            suffix *= nums[i];
        }

        int prefix = 1;
        for(int i=0; i<n; i++) {
            if(nums[i] != 0) {
                suffix /= nums[i];
                if(zeroCnt == 0) res[i] = prefix * suffix;
                prefix *= nums[i];
            }
            else if(zeroCnt == 1) {
                res[i] = prefix * suffix;
            }
        }

        return res;
    }
};