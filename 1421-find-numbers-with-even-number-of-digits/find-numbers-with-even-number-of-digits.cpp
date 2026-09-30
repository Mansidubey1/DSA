class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res =0 ;
        for(int i=0 ; i<nums.size() ; i++){
                    int cnt =0 ;

          int  x = nums[i] ;
          while(x>0){
            cnt++ ;
         x = x/10 ;

          }  
          if(cnt%2==0){
            res++ ;
          }
        }
        return res ;
    }
};