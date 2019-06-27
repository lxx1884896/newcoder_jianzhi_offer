class Solution {
public:
    int jumpFloorII(int number) {
       if (number<=0)return 0;
       if(number==1) return 1; 
        vector<int> dp(number+1,0);
        int res,tmp=1;
        
        
        for(int i=1;i<number;i++){
            
            
          res=2*tmp;
            
          tmp=res;
            
        }
        
        return res;
    }
};