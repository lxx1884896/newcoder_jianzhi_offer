class Solution {
public://二刷补充：剑指上两种 一种map，一种异或
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size()==0)  return ;
        
        unordered_map<int,int> m;
        
        vector<int> tmp;        
        for(int i=0;i<data.size();i++){
            
           
            
            m[data[i]]++;
        }
        unordered_map<int,int>:: iterator it;
        
        for(it=m.begin();it!=m.end();it++){
            
            if(it->second==1) tmp.push_back(it->first);
            
        }
        
        *num1=tmp[0];
        *num2=tmp[1];
        
        
        
    }
};