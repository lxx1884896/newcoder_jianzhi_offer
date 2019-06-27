class Solution {
public://二刷补充：这两种应该足够了，主要是对照着图进行操作
    vector<int> multiply(const vector<int>& A) {
        int len=A.size();
        vector<int> res(len);
        
        if(len==0)  return res;
        //for(int i=0;i<len;i++){
        //    for(int j=0;j<len;j++){
        //        if(i==j) continue;
         //       res[j]*=A[i];
         //       
         //   }
        //}
        res[0]=1;//上面注释的方法也行得通，下面用的是构建上三角，下三角，连乘法
        for(int i=1;i<len;i++){//具体见讨论区 披萨大叔 （图很重要）
            res[i]=res[i-1]*A[i-1];
        }
        int tmp=1;
        for(int j=len-2;j>=0;j--){
            tmp*=A[j+1];
            res[j]*=tmp;
        }
        return res;
    }
};