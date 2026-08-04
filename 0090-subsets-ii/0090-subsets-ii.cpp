class Solution {
private:
    void func(int start, int n, vector<int> nums, vector<int> subset, vector<vector<int>>& res){
        res.push_back(subset);

        for(int i=start; i<n; i++){
            if(i > start && nums[i] == nums[i-1]) continue;

            subset.push_back(nums[i]);

            func(i+1, n, nums, subset, res);

            subset.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        // set<vector<int>> st;
        vector<vector<int>> res;
        vector<int> subset;

        sort(nums.begin(), nums.end());

        func(0, n, nums, subset, res);

        return res;
    }
};