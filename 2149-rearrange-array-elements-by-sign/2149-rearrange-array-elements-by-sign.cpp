class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();

        int pos = 0, neg = 0;

        while(pos < n && neg < n) {
            while(nums[pos] < 0) pos++;
            while(nums[neg] > 0) neg++;

            res.push_back(nums[pos]);
            pos++;
            res.push_back(nums[neg]);
            neg++;
        }

        return res;
    }
};