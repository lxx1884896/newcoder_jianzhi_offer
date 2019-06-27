class Solution {
public:
    bool isNumeric(char* string)
    {   int len=strlen(string);
     if (len==0 || string=="") return false;
        bool sign=false,dian=false,e=false;
     for(int i=0;i<len;i++){
         if(string[i]=='E' ||string[i]=='e'){
             if (e==true) return false;
             if(i==len-1) return false;
             e=true;
         }
         else if(string[i]=='+' || string[i]=='-'){
             if(sign&& string[i-1]!='e'&&string[i-1]!='E') return false;
             if(!sign&& i>0 &&string[i-1]!='e'&&string[i-1]!='E') return false;
             sign=true;
         }
         else if(string[i]=='.'){
             if(e || dian) return false;
             dian=true;
         }
         else if(string[i]>'9' || string[i]<'0')return false;
         
     }
     return true;
        
    }

};