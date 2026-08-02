class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums2 ;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[i]+nums[j]==target){
                    nums2.push_back(i) ; 
                   nums2.push_back(j) ; 
                   return nums2 ;
                }
            }
        }
        return nums2 ;
    }
};