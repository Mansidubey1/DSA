class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr ;
        int x = n ;
        while(x>0){
            arr.push_back(x%10) ;
            x = x/10 ;
        }
        sort(arr.begin() , arr.end()) ;
        return (arr[arr.size()-1]*arr[arr.size()-2]) ;
    }
};