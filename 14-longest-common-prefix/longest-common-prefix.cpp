class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string match = strs[0] ;
        for(int i= 0 ; i<strs.size() ; i++){
            int j=0 ;
            while( j<strs[i].size() && j<match.size() ){
                if(match[j]==strs[i][j]){
                                        j++ ;

                    continue ;
                }
                else{
                    break ;
                }
            }
                                                match.erase(j) ;

        }
        return match ;
    }
};