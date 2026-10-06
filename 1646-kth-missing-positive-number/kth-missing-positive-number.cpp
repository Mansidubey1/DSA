class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt =0 , num= 1 , i=0 ;
       while(cnt!=k && i<arr.size()){
        if(num==arr[i]){
            i++ ;
            num++ ;
        }
        else{
            num++ ;
            cnt++ ;
        }
       }
       while(cnt!=k){
        cnt++ ;
        num++ ;
       }
       return num-1 ;
    }
};