class Solution {
public:
    int jumpFloor(int number) {
        
        if(number==0) return 0;
        if(number==1) return 1;
        int f1= 0, f2= 1;
        int current;
        
        for(int i=2;i<=number+1;i++){
            current=f1+f2;
            f1=f2;
            f2=current;
        }
        
        return current;
    }
};