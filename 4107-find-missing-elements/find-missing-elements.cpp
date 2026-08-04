class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        bool found  ;
        vector<int> miss ;
        sort(nums.begin() , nums.end()) ;
       int temp = nums[0] ;

        for(int i=nums[0] ; i<nums[nums.size()-1] ; i++){
            found = false ;
            for(int j=0 ; j<nums.size() ; j++){
                if(nums[j]==i){
                    found = true ;
                    break ;
                }

         }
        if(found==false){
             miss.push_back(i) ;
             
        }
           

         }

        
        return miss ;
    }
};