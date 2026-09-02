class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int sum =0 ;
        int cnt =0 ;
        for(int i=0 ; i<moves.length() ; i++){
            if(moves[i]=='L'){
                sum -= 1 ;
            }
            else if(moves[i] == 'R'){
                sum += 1 ;
            }
            else{
                cnt++ ;
            }
        }
        sum = abs(sum) + cnt ;
        return sum ;
    }
};