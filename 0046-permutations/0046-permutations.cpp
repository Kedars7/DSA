class Solution {
private:
    void func(int ind, int n, vector<int> nums, vector<int> perm, vector<vector<int>>& res) {
        if(ind > -1){
            perm.push_back(nums[ind]);
            nums.erase(nums.begin() + ind);
        }

        for(int i=0; i<nums.size(); i++) {
            func(i, n, nums, perm, res);
        }

        if(perm.size() == n)
            res.push_back(perm);
        
        return;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        vector<int> perm;

        func(-1, n, nums, perm, res);

        return res;

    }
};