class Solution {
public:
    int Sum_Solution(int n) {
       int res=n;
       bool(n>0) &&((res+=Sum_Solution(n-1))>0);
        return res;
    }
};