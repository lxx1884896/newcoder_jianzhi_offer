class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        if(n<1 || m<1)  return -1;
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(i);
        }
        int t=0;
        while(res.size()>1){
           t=(t+m-1)%res.size();
            res.erase(res.begin()+t);
        }
        
        return res.back();
        
    }
};