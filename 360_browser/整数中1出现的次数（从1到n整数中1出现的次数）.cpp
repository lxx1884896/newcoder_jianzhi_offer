class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {  if(n<=0) return 0;
     int cnt=0;///////////////////最优解法是找到一个规律？见评论区
   ////[LeetCode] Number of Digit One 数字1的个数 - Grandyang -
     ///博客园  http://www.cnblogs.com/grandyang/p/4629032.html 
     
     //二刷补充，剑指上有一个找规律的更简单的算法，好像也不太难？有空看情况
     for(int i=1;i<=n;i++){
         string tmp=to_string(i);
         cnt+=count(tmp.begin(),tmp.end(),'1');
         
     }
     
     return cnt;
    
    }
};