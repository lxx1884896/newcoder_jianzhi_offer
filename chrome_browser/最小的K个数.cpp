class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int>res;
   //二次刷补充： 还有O(n)的方法，partition  具体见剑指offer的·pdf
        if(input.size()==0 || k<=0 || k>input.size() )  return res;
        
        
        priority_queue<int> q(k-1,INT_MAX); /////大顶堆
        //priority_queue<int,vector<int>,greater<int> > q;//小顶堆
        //while( q. empty() == false) q. pop( ) ;
        q.push(input[0]);
        for(int i=1;i<input.size();i++){
           
            if(input[i]<q.top()){
                
                q.pop();
                q.push(input[i]);
            }
                
        }
        while(!q.empty()){
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