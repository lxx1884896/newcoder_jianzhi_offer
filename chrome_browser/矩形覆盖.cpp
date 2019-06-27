class Solution {
public:
    int rectCover(int n) {
        
        if(n<=0) return 0;
        if(n==1) return 1;
        
        int f=0,f1=1,f2=1;
        for(int i=2;i<=n;i++){
            
            f=f1+f2;
            f1=f2;
            f2=f;
            
        }
        
        return f;
        
    }
};