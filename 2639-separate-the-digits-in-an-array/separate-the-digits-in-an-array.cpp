class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> arr ;
        int x =0 ;
        for(int i=nums.size()-1 ; i>=0 ; i--){
            x = nums[i] ;
            while(x>0){
                arr.insert(arr.begin(), x%10)  ;
                x = x/10 ;
                
            }
        }
        return arr ;
    }
};