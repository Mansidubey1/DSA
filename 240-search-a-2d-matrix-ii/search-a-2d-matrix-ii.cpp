class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int low1 = 0;
        int high1 = matrix.size() - 1;

       for(int i=0 ; i<matrix.size() ; i++){
       int low = 0 ;
       int high = matrix[0].size()-1 ;
       while(low<=high){
        int mid = (low+high)/2 ;
        if(matrix[i][mid]==target){
            return true ;
        }
        else if(matrix[i][mid]<target){
            low = mid+1 ;
        }
        else{
            high = mid-1 ;
        }
       }
       }
       return false ;
    }
};