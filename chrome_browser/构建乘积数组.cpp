class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
      int len=A.size();
        if(len==0) return {};
        vector<int> res(len,1);
       for(int i=1;i<len;i++){
           res[i]=res[i-1] * A[i-1];
       }
        int tmp=1;
        for(int j=len-2;j>=0;j--){
          tmp*=A[j+1];
          res[j]*=tmp;
        }
        
        return res;
    }
};	