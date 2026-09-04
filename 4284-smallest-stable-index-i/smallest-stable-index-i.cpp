class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int cnt = -1;

        for(int i = 0; i < nums.size(); i++) {
            
            int mini = INT_MAX;
            int maxm = INT_MIN;

            // Maximum from [0...i]
            for(int j = 0; j <= i; j++) {
                maxm = max(maxm, nums[j]);
            }

            // Minimum from [i...n-1]
            for(int j = i; j < nums.size(); j++) {
                mini = min(mini, nums[j]);
            }

            int diff = maxm - mini;

            if(diff <= k) {
                return i;
            }
        }

        return cnt;
    }
};