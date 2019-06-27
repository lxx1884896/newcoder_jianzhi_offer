class Solution {
public:
    string LeftRotateString(string str, int n) {
       
        int len=str.size();
         if(len==0 || n<0) return "";
        n=n%len;
        reverse (str.begin(),str.end());
        reverse(str.begin(),str.end()-n);
        reverse(str.end()-n,str.end());
        
        return str;
    }
};