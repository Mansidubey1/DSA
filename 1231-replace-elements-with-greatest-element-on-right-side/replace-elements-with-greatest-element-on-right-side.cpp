class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1){
            arr[0] = -1 ;
        }
        for(int  i=0 ; i<arr.size()-1 ; i++){
                    int maxm = INT_MIN ;

            for(int j=i+1 ; j<arr.size() ; j++){
                maxm = max(maxm , arr[j]) ;
            }
            arr[i]=maxm ;
        }
        arr[arr.size()-1] = -1 ;
        return arr ;
    }
};