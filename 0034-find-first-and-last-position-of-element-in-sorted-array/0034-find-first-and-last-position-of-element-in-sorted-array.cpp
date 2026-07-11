class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res(2, -1);

        int low=0, high=n-1;

        while(low <= high) {
            int mid = ((high-low) / 2) + low;

            if(nums[mid] == target) {
                for(int i=mid; i>=0; i--) {
                    if(nums[i] == target) res[0] = i;
                    else break;
                }

                for(int j=mid; j<n; j++) {
                    if(nums[j] == target) res[1] = j;
                    else break;
                }

                break;
            }
            else if(nums[mid] < target) {
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        return res;
    }
};