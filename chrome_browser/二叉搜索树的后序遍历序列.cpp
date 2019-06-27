class Solution {
public:
    bool VerifySquenceOfBST(vector<int> s) {
        if(s.empty()) return false;
       return helper(s,0,s.size()-1);
        
    }
    bool helper(vector<int>& s,int start,int end){
        if(start>=end) return true;
        int root=s[end];
        int i=start;
        while(s[i]<root){
          i++;  
        }
        
        int j=i;
        while(j<end){
            if(s[j]<root)
                return false;
            j++;
        }
        
        
         bool left=helper(s,start,i-1);
    bool right=helper(s,i,end-1);
    return left && right ;
    }
    
   
};