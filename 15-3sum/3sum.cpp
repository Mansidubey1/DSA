class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i = 0; i < nums.size() - 2; i++) {

            if(i > 0 && nums[i] == nums[i-1])
                continue;

            unordered_set<int> st;

            for(int j = i + 1; j < nums.size(); j++) {

                int need = -(nums[i] + nums[j]);

                if(st.find(need) != st.end()) {
                    res.push_back({nums[i], need, nums[j]});

                    while(j + 1 < nums.size() && nums[j] == nums[j+1])
                        j++;
                }

                st.insert(nums[j]);
            }
        }

        return res;

    }
};