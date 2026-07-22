class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n);
        int temp = 0;
        for(int i=n-1; i>=0; i--){
            nge[i] = temp;
            temp = max(temp, nums[i]);
        }

        int pge = 0;
        int water = 0;

        for(int i=0; i<n; i++){
            if(nge[i] > nums[i] && pge > nums[i]){
                water += min(nge[i] - nums[i], pge - nums[i]);
            }

            pge = max(pge, nums[i]);
        }

        return water;
    }
};