class Solution {
public:
    int rectCover(int number) {
        if(number<=0) return 0;
        if(number==1) return 1;
        
        if(number==2) return 2;
        
        int num3,num1=1,num2=2;
        
        for(int i=3;i<=number;i++){
            
            num3=num1+num2;
            
            num1=num2;
            
            num2=num3;
                
            
        }
        
        return num3;
        
    }
};