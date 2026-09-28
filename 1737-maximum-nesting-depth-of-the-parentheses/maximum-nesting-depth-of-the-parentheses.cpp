class Solution {
public:
    int maxDepth(string s) {
        int para = INT_MIN , cnt =0 ;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]=='('){
                cnt++ ;
            }
            else if(s[i]==')'){
                cnt-- ;
            }
            if(cnt>para){
                para = cnt ;
            }
        }
        return para ;
    }
};