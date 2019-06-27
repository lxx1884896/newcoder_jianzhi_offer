class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int len=str.length();
        if(len==0) return -1;
        map<char,int> m;
        for(int i=0;i<str.size();i++){
            
            m[str[i]]++;
        }
        
        for(int i=0;i<len;i++){
            if(m[str[i]]==1) return i;
        }
        return -1;
    }
};