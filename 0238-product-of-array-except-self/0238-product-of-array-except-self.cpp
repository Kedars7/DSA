class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n, 0);
        int running = 1;

        for(int i=n-1; i>=0; i--) {
            running *= nums[i];
            temp[i] = running;
        }

        running = 1;

        vector<int> res(n);
        for(int i=0; i<n; i++) {
            int next = 1;
            if(i < n-1) next = temp[i+1]; 

            res[i] = next * running;

            running *= nums[i];
        }

        return res;
    }
};