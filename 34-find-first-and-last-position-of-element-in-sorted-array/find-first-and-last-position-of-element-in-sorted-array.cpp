class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
                vector<int> arr = {-1 , -1} ;
              int low = 0, high = nums.size() - 1;
        int ans = nums.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        // x is not present
        if (ans == nums.size() || nums[ans] != x)
            return arr;

        arr[0] = ans;

        // Upper bound: first index nums[i] > x
        low = 0;
        high = nums.size() - 1;
        ans = nums.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        arr[1] = ans - 1;

        return arr;
    }
};