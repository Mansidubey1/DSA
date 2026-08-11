class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      map<int , int> arr ;
        int pre = -100 ;
        vector<int> ele ;
        int s = nums.size() ;
        for(int i=0 ; i<nums.size() ; i++){
            arr[nums[i]]++ ;
        }
        
        for(auto it: arr){
            if(it.second>s/3){
              ele.push_back(it.first) ;

            }
        }
        return ele ;
    }
};