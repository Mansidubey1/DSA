class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = nums[0];
        int mn = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            int x = nums[i];

            int a = mx * x;
            int b = mn * x;

            mx = max(x, max(a, b));
            mn = min(x, min(a, b));

            ans = max(ans, mx);
        }

        return ans;
    }
};