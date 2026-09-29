class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int cnt =0 ;
        while(mainTank > 0 ){
        if(mainTank>=5  && additionalTank > 0){
            cnt += 5 ;
            additionalTank -= 1 ;
            mainTank = mainTank-5+1 ;
        }
        else{
            cnt += mainTank ;
            mainTank =0 ;
        }
        }
        return cnt*10 ;
      
    }
};