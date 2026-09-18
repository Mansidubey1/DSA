class Solution {
public:
    bool isPalindrome(string x) {
        string s ;
        int j =0 ;
        for(int i=0 ; i<x.length() ; i++){
            char ch = tolower(x[i]) ;
            if(ch>='a' && ch<='z' || ch>='0' && ch<='9'){
                s.push_back(ch) ;
            }
        }
          int low = 0 ;
        int high =  s.length()-1 ;
        while(low<=high){
            if(s[low]==s[high]){
                low++ ;
                high-- ;
                continue ;
            }
            else{
                return false ;
            }
        }
        return true ;
    }
};