class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0, high=n-1;
        int ind = INT_MAX;

        while(low <= high) {
            int mid = (low+high) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target) {
                low = mid+1;
            }
            else{
                ind = mid;
                high = mid-1;
            }
        }

        if(ind == INT_MAX) return n;

        return ind;
    }
};