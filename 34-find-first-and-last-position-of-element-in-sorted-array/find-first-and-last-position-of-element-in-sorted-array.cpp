class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
                vector<int> arr = {-1 , -1} ;
                int first =0 , sec = 0 ;

        if(nums.size()==0){
            return arr ;
        }
          int low = 0 ;
       int high = nums.size()-1 ;
       int mid =0 ;
      while(low<=high){
        mid = (low+high)/2 ;
        if(target<nums[mid]){
            high = mid-1 ;
        }
        else if(target==nums[mid]){
            first = mid ;
                  arr[0] = first ;

          high = mid-1 ; 
                }
        else {
            low = mid+1 ;
        }
      }
      low = 0 ;
       high = nums.size()-1 ;
       while(low<=high){
        mid = (low+high)/2 ;
        if(target<nums[mid]){
            high = mid-1 ;
        }
        else if(target==nums[mid]){
            sec = mid ;
                  arr[1] = sec ;

            low = mid +1 ; 
                }
        else {
            low = mid+1 ;
        }
      }
        return arr ;
    }
};