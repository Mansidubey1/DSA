class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sing =0 , dou =0 ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]>9){
                dou += nums[i] ;
            }
            else{
                sing += nums[i] ;
            }
        }
        if(dou!=sing){
            return true ;
        }
        else{
            return false ;
        }
        return true ;
    }
};