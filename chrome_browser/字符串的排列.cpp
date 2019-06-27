class Solution {
public:
    vector<string> Permutation(string str) {
        if(str.empty()) return {};
        vector<string> res;
        pailie(str,res,0);
        sort(res.begin(),res.end());
        return res;
        
        
    }
    
    
    void pailie(string str, vector<string>& res, int begin){
        if(begin==str.length()-1){
           res.push_back(str);
        }
        
        for(int i=begin;i<str.length();i++){
            if(i!=begin && str[begin]==str[i]) continue;
            swap(str[i],str[begin]);
            pailie(str,res,begin+1);
            swap(str[i],str[begin]);
        }
    }
};