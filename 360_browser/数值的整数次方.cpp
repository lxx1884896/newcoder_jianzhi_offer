class Solution {
public: //还有快速幂做法和递归做法？  ，重点看一下快速幂做法吧
    double Power(double base, int exponent) {
        if (exponent==0)  return 1;
        
        if(exponent==1) return base;
        
        if(((base-0.0)<0.00000001) && ((base-0.0)>0.00000001)) return 0;
        
        int flag=exponent;
        double result=1;
        exponent=exponent>0?exponent:(-exponent);
        
        for(int i=0;i<exponent;i++){
            
            result*=base;
            
        }
        
        return flag>0?result:1/result;
        
    }
};