class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

         int n = matrix.size() ;
         int m = matrix[0].size() ;
        vector<int> rotmat(n*m) ;
        int k=0 ;

        int top =0 , bottom =n-1 , left = 0 , right =m-1 ;

        while(top<=bottom && left<=right){
             for(int j=left ; j<=right ; j++){
            
               rotmat[k] =  matrix[top][j] ;
                k++ ;
        }
        top ++ ;
        for(int j=top; j<=bottom ; j++){
            rotmat[k] =   matrix[j][right]  ;
            k++ ;
        }
        right-- ;

if(top<= bottom){
 for(int j=right ; j>=left ; j--){
           rotmat[k] = matrix[bottom][j]   ;
           k++ ;
        }

       
        bottom-- ;
}
if(left<=right){
  for(int j=bottom ; j>=top ; j--){
         rotmat[k] =  matrix[j][left] ;
           k++ ;
        }
        left++ ;
        
}
      
        }
               
        return rotmat ;
    }
};