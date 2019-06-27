class Solution {
public://二刷补充：这个方法复杂度大一点，再加上剑指上的双端队列方法就可以了：拆分为四步
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {  vector<int>tmp,res;
     int len=num.size();
     if(len==0 ||size<=0 || size>len) return res;
     for(int i=0;i<len-size+1;i++){
  /////////用双端单调队列，详见讨论区的 crisy1991，马客（Mark）       
         tmp.assign(num.begin()+i,num.begin()+i+size);
         // for(int j=0;j<tmp.size();j++){cout<<tmp[j];}cout<<endl;
         sort(tmp.begin(),tmp.end());
         res.push_back(tmp.back());
         tmp.clear();
     }
        
     
     return res;
        
    }
};