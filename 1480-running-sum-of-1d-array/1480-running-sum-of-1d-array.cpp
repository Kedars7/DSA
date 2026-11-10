class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int sum = 0;
        for(int i=0; i<n; i++) {
            if(i == 0) {
                res[i] = nums[i];
                continue;
            }
            res[i] = res[i-1] + nums[i];
        }

        return res;
    }
};