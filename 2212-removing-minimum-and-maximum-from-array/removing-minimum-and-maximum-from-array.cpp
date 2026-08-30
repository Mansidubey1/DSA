class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int n = nums.size();

        int mn = INT_MAX, mx = INT_MIN;
        int mini = 0, maxi = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < mn) {
                mn = nums[i];
                mini = i;
            }

            if (nums[i] > mx) {
                mx = nums[i];
                maxi = i;
            }
        }

        int a = max(mini, maxi) + 1;
        int b = n - min(mini, maxi);
        int c = min(mini, maxi) + 1 + n - max(mini, maxi);

        return min({a, b, c});
    } 
};