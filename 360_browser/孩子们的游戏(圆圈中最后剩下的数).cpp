class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {//公式法，约瑟夫环的方法
        if(n<1 || m<1) return  -1;
        //int last=0;
        //for(int i=2;i<=n;i++){
            
            //last=(last+m)%i;
        //}
        
        //return last;
        vector<int> res;//牢记目前这种方法，公式也要稍微记一下
        for(int i=0;i<n;i++){//二刷补充：学，记一下讨论区的数组模拟环方法 weizier
            
            res.push_back(i);
        }
        int t=0;
        while(res.size()>1){
            t=(t+m-1)%res.size();
            res.erase(res.begin()+t);
            
        }
        return res[0];
        
    }
};