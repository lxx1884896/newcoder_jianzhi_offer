class Solution {
public://27、剑指offer--字符串的排列 - qqky - 博客园  
    //https://www.cnblogs.com/qqky/p/6918095.html
    
    ////////////还有dfs写法？看讨论区
    //二刷补充：除了下面的方法外 再找一个，例如评论区dfs，或其他的
    vector<string> Permutation(string str) {
       vector<string> a;
        
        if(str.length()==0) return a;
        pailie(a,str,0);
        
        sort (a.begin(),a.end());
        
        return a;
    }
    
    void pailie(vector<string>&a,string str,int begin){
        
        if(begin==str.size()-1){
            a.push_back(str);
        }
        
        for(int i=begin;i<str.length();i++){
            
            if(i!=begin&&str[i]==str[begin]){
            
            continue;
        }
        
            swap(str[i],str[begin]);
            
            pailie(a,str,begin+1);
            
            swap(str[i],str[begin]);
        }
        
    }
};