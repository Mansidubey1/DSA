class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int siz = 0 ;
        int len =0 ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==1){
                siz++ ;
            }
            if(nums[i]==0){
                len= max(len , siz) ;
                siz = 0 ;
            }
        }
        len = max(len , siz) ;
        return len ;
    }
};