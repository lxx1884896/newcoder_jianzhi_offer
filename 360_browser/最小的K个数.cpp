class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int>res;
   //二次刷补充： 还有O(n)的方法，partition  具体见剑指offer的·pdf
        if(input.size()==0 || k<=0 || k>input.size() )  return res;
        //priority_queue<int> q; /////大顶堆
        int a[10];
        priority_queue<int,vector<int>,greater<int> > q;//小顶堆
        while( q. empty() == false) q. pop( ) ;
        for(int i=0;i<input.size();i++){
            
            q.push(input[i]);
        }
        for(int i=0;i<k;i++){
            int tmp=q.top();
            
            res.push_back(tmp);
            q.pop();
        }
        
        return res;
        
        
         //sort(input.begin(),input.end());
        
        //for(int i=0;i<k;i++){
            
        //    res.push_back(input[i]);
        //}
        
        //return res;
        
       
    }
};