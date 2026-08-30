class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int size = nums.size() ;
        int sm = INT_MAX ;
        bool found = false ;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[i]==nums[j]) {
                    for(int k=j+1 ; k<nums.size() ; k++ ){
                        if(nums[i]==nums[k]){
                            found = true ;
                            sm = min(sm, abs(i-j)+ abs(j-k)+ abs(k-i)) ;
                        }
                    }
                }
            }
        }
        if(!found){
            return -1 ;
        }
        return sm ;

    }
};