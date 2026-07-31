class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          int len = nums.size() ;
        k = k%len ;
        int temp =len-k ;
        vector<int> arr ;
        if(len<2 || k==0){
            return ;
        }
       for(int i=temp ; i<len ; i++){
        arr.push_back(nums[i]) ;
       }
       for(int i=0 ; i<temp ; i++){
        arr.push_back(nums[i]) ;
       }

       nums = arr ;
    }
};