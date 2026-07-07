class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i=1; i<=n; i++) {
            if(nums[i%n] < nums[i-1])
                cnt++;
        }

        if(cnt > 1) return false;

        return true;
    }
};