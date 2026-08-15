class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

         vector<vector<int>> arr ;
         
         int n = intervals.size() ;
         if(n==1){
            return intervals ;
         }

         sort(intervals.begin() , intervals.end()) ;
         arr.push_back(intervals[0]) ;

         for(int i=0 ; i<n ; i++){
            if(intervals[i][0]<=arr.back()[1]){
                arr.back()[1] = max(arr.back()[1] , intervals[i][1]) ;
            }
            else{
                arr.push_back(intervals[i]) ;
            }
         }
          
        return arr ;
    }
};