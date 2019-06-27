class Solution {
public:
    int StrToInt(string str) {
        if(str.length()==0 ||str=="") return 0;
    

 int n = str.size(), s = 1;
        long long res = 0;
       
        if(str[0] == '-') s = -1;
        for(int i = (str[0] ==  '-' || str[0] == '+') ? 1 : 0; i < n; ++i){
            if(!('0' <= str[i] && str[i] <= '9')) return 0;
             res=res*10+str[i]-'0';//res=res*10+str[i]-'0';
        } 
        
        if((s>0&&res>INT_MAX)||(s<0&&res<INT_MIN)){//溢出
            
          return 0; 
       }
        return res * s;
        
    }
};