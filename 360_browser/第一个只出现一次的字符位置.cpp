class Solution {
public://按照剑指上，最常见思路为对一个数，让他和他之后的分别比较，没相同的即为第一次o(n^2)
    //然后是下面这种更加快捷o(n)
    int FirstNotRepeatingChar(string str) {
        if (str.length()==0) return -1;
        
        unordered_map<char,int> m;
        
        for(int i=0;i<str.length();i++){
            
            m[str[i]]++;
        }
        
        
        
        for(int i=0;i<str.length();i++){
            
            if(m[str[i]]==1) {
                
               return i;
            }
        }
        
        return -1;
        
    }
};