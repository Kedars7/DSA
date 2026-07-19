class Solution {
private:
    void func(int ind, int n, int target, int sum, vector<int>& nums, vector<int> subset, vector<vector<int>>& res){
        if(ind == n){
            if(sum == target) res.push_back(subset);
            return;
        }

        if(sum > target) return;

        //not take
        func(ind+1, n, target, sum, nums, subset, res);
        //take
        subset.push_back(nums[ind]);
        func(ind, n, target, sum+nums[ind], nums, subset, res);
        subset.pop_back();
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> subset;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        func(0, n, target, 0, nums, subset, res);

        return res;
    }
};