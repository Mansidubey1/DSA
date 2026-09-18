class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool pali = true  ;

        int low =0 ;
        int high ;

        for(int i=0 ; i<words.size() ; i++){
            pali = true ;
          low =0 ;
          high = words[i].size()-1 ;
          while(low<high){
            if(words[i][low]!=words[i][high]){
                pali = false ;
            break ;
            }
            else{
               low++ ;
               high-- ; 
            }
          }
         if(pali==true){
            return words[i] ;
         }
        }
        return "" ;
    }
};