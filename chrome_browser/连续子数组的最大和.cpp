class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int len=array.size();
        if(len==0) return 0;
        vector<int> dp(len,0);
        dp[0]=array[0];
        int res=INT_MIN;
        for(int i=1;i<len;i++){
          dp[i] =max(dp[i-1]+array[i],array[i]);
          res=max(dp[i],res);
        }
        return res;
    
    }
};