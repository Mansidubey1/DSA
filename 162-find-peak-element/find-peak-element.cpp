class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxm = nums[0] ;
        int ind =0 ;
        for(int i= 1 ; i<nums.size() ; i++){
            if(nums[i]>maxm){
                ind = i ;
                maxm = nums[i] ;
            }
        }
        return ind ;
    }
};