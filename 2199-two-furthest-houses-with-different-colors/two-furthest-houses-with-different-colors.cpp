class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int low =0 ;
        int high = colors.size()-1 ;
        int dist = INT_MIN ;

       for(int i=0 ; i<high+1 ; i++){
        for(int j=i+1 ; j<high+1 ; j++){
            if(colors[i]!=colors[j]){
                dist = max(dist, abs(i-j)) ;
            }
                }
       }
       return dist ;
    }
};