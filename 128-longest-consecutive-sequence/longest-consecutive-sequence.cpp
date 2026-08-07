class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0 ;
        }
        sort(nums.begin() , nums.end()) ;
        int cons =1 , count=1 ;
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i+1]==nums[i]+1){
                cons++ ;
            }
            else if(nums[i]==nums[i+1]){
                continue ;
            }
            else{
                cons= 1 ;
            }
            count= max(count , cons) ;
        }
        return count ;
    }
};