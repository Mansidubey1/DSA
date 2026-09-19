class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt =0 ;
        int sp=0 ;
        int i= s.size()-1 ;
        
    while(s[i]==' '){
        i-- ;
    }

       while( i>=0 && s[i]!=' '){
        cnt++ ;
        i-- ;
       }

       return cnt ;
    }
};