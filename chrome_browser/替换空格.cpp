class Solution {
public:
	void replaceSpace(char *str,int length) {
        
         if(strlen(str)==0) return ;
       string s(str);
       string tmp;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
              tmp+="%20";
              
            }
            
            else{tmp+=s[i];}
        }
        
        auto res=tmp.c_str();
        strcpy(str,res);
            
          
	}
};