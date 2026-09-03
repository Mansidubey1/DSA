class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        if(nums1.size()==1 || nums1.size()==2){
            return true ;
        }
        int evenum=0 ;
        int oddnum =0 ;
       for(int i=0 ; i<nums1.size() ; i++){
        if(nums1[i]%2==0){
            evenum++ ;
        }
        else{
            oddnum++ ;
        }
       }
       if(evenum==1 || oddnum == 1){
        return true  ;
       }
       return true ;
    }
};