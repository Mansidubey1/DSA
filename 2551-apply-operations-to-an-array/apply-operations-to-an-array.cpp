class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i]==nums[i+1]){
                nums[i] = nums[i]*2 ;
                nums[i+1] = 0 ;
            }
        }
        int nonz = 0 ;
        int z = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0){
                z = i+1 ;
                while(z<nums.size() && nums[z]==0){
                   z++ ;
                    }
                    if(z<nums.size() && nums[z]!=0){
                        swap(nums[i], nums[z]) ;
                }
            }
        }
        return nums ;
    }
};