class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mini = INT_MAX ;
        bool found = false ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==target){
                mini = min(mini , abs(i-start)) ;
                found = true ;
            }
        }
        if(!found){
            return 0 ;
        }
        return mini ;

    }
};