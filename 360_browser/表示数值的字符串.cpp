class Solution {
public:
    bool isNumeric(char* str)
    {/////////////详细解释见讨论区的 networkcpx
        if(strlen(str)==0 || str=="") return false;
       if((strlen(str)==1)&&(str[0]>'9'||str[0]<'0')) return false;
      bool sign=false,dot=false,hasE=false;
      for(int i=0;i<strlen(str);i++){
          
          if(str[i]=='e' || str[i]=='E'){
              if(hasE ) return false;
              if(i==strlen(str)-1) return false;
              hasE=true;
      }
          
         else if(str[i]=='+' || str[i]=='-'){
              if(sign&&str[i-1]!='e'&&str[i-1]!='E') return false;
              if(!sign&&i>0&&str[i-1] != 'e' && str[i-1] != 'E') return false;
              sign=true;
          }
          
          
        else  if(str[i]=='.'){
              if(dot) return false;
              if(hasE) return false;
              dot=true;
          }
          else if(str[i]<'0' || str[i]>'9') return false;
      }
        return true;
    }

};