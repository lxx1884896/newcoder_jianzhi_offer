class Solution {
public://二刷补充：这种方法还不错
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> res;
        if(sum<=0)  return res;
        int i=1,j=2;
        while(i<j){
           int tmp=(j-i+1)*(i+j)/2;//这几个连续数的和
           if(tmp==sum){
               vector<int> tmp_res;
              for(int k=i;k<=j;k++) 
               tmp_res.push_back(k);
               res.push_back(tmp_res);
               i++;//相等之后还要往前走
           }
           else if(tmp<sum) j++;
           else if(tmp>sum) i++;
        }
        
        return res;
    }
};