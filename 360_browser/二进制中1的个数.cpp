class Solution {
public:
     int  NumberOf1(int n) {
         //if(n==0) return 0;
         
         //int res=0;
        // while(n!=0){
            //res+=n&1;//貌似按位“与”运算时，自动转换为二进制了？
            //n=n>>>1;//无符号右移，例如从11101变成1110
             
 ////////////////c++中无  <<<  这个符号            
         //}
         
        // return res;
         
         

unsigned int num = (unsigned)n;
    int res = 0;
    while(num != 0)
    {
        res += num & 1;
        num = num >> 1;
    }
    return res;
     }
};