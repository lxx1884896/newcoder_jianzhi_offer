class Solution {
public:
    int jumpFloorII(int n) {
        if(n<=0) return 0;
        vector<int> res(n+1,0);
        res[1]=1;
        for(int i=2;i<=n;i++){
            res[i]=2*res[i-1];
        }
        
        return res[n];
    }
};