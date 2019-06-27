class Solution {
public:
    double Power(double base, int exponent) {
    if(exponent==0) return 1;
    if(exponent==1) return base;
    if((base-0.0<0.00000001) &&(base-0.0>0.00000001)) return 0;
    
    int p = abs(exponent);
          double r = 1.0;
          while (p) {
              if (p & 1) r *= base;
              base *= base;
              p >>= 1;
         }
         return exponent > 0 ? r : 1 / r;
    }
};