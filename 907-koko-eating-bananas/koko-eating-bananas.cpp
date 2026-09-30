class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1 ;
        int ans ;
        int high = *max_element(piles.begin() , piles.end()) ;
        while(low<high){
            int mid = (low+high)/2 ;
            int sum=0 ;
            for(int i=0 ; i<piles.size() ; i++){
           sum += (piles[i] + mid - 1) / mid;
            }
            if(sum<=h){
                high = mid ;
            }
           
            else{
                low = mid+1 ;
            }
        }
        return low ;
    }
};