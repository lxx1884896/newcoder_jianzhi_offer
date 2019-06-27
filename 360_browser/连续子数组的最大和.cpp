class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
         if(array.size()==0) return 0;
        if(array.size()==1) return array[0];
        int len=array.size();
        vector<int> dp(len,0);
        dp[0]=array[0];
        int res=dp[0];
        ///////////////////////设dp[i]为，到i位置为止，最大的连续子数组和。
///////dp[i-1]是以a[i-1]结尾，而不是前(0--i-1)所有的最大字数组和，不要一来就直接想求终极解。
        ////二刷补充：剑指中给出了两种，意思差不多都是这个，这种应该足够
        for(int i=1;i<len;i++){
            
            dp[i]=max(array[i],dp[i-1]+array[i]);
            
            res=max(res,dp[i]);
        }
        
        
        
       
        
        return res;
    }
};