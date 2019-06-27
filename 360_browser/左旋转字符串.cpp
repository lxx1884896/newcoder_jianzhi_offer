class Solution {
public:
    string LeftRotateString(string str, int n) {
       if(str.length()==0 || n<=0)  return str;
        
        //for(int i=0;i<n;i++){
 //以下两种方法是最先想到的，讨论区提倡的是用字符串的翻转具体参考drdr，以及 jianghan0712          
            //char tmp=str[0];
            //str.erase(0,1);
            //str.push_back(tmp);
     //--------------------------
           // string tmp;
           // char s=str[0];
           // tmp=s;
           // str.erase(0,1);
           // str+=tmp;
    //--------------------------
          
        //}
        
        //reverse(str.begin(),str.begin()+n-1);
         //reverse(str.begin()+n,str.end());
         //reverse(str.begin(),str.end());
       
        reverse(str.begin(), str.end());
        reverse(str.begin(), str.begin() + str.size() - n);
        reverse(str.begin() + str.size() - n, str.end());
        return str;
    }
};