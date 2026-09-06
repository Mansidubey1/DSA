class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
          int leftsum =0 , dif =0 ;
          vector<int> arr ;
        int rightsum =0 ;
        for(int i=0 ; i<nums.size() ; i++){
            leftsum =0 ;
            rightsum =0 ;
            for(int j=0 ; j<i ; j++){
                leftsum += nums[j] ;
            }
             for(int j=i+1 ; j<nums.size() ; j++){
                rightsum += nums[j] ;
            }
           dif = abs(leftsum-rightsum)  ;
          arr.push_back(dif) ;

        }
        return arr ;
    }
};