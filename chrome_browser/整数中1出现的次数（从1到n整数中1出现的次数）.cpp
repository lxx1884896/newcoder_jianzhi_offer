class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {    if(n<=0)  return 0;
     int cnt=0;
        for(int i=1;i<=n;i++){
          string tmp=to_string(i);  
           cnt+=count(tmp.begin(),tmp.end(),'1');
        }
     
     return cnt;
    
    }
};