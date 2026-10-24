class Solution {
public:
    int beautySum(string s) {
      int n = s.length();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};

            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int maxval = 0;
                int minval = INT_MAX;

                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxval = max(maxval, freq[k]);
                        minval = min(minval, freq[k]);
                    }
                }

                ans += maxval - minval;
            }
        }

        return ans;
    }
};