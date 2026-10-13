class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0  ; i<nums.size() ; i++){
            nums[i] = nums[i]*nums[i] ;
        }
                sort(nums.begin() , nums.end()) ;

        int low = 0 ;
        long long sum=0 ;
        int high = nums.size()-1 ;
        while(low<high){
            sum += - nums[low]  + nums[high] ;
            low++ ;
            high-- ;
        }
        if(nums.size()%2!=0){
            return sum+ nums[low] ;
        }
        return sum ;
    }
};