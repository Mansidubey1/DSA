class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini = INT_MAX ;
        for(int i=0 ; i<nums.size() ; i++){
                    int digsum = 0 ;
                    while(nums[i]>0){
                    digsum = digsum + nums[i]%10 ;
                    nums[i] = nums[i]/10 ;
                    }
                    if(digsum==i){
                        return i ;
                    }
        }
        return -1 ;
    }
};