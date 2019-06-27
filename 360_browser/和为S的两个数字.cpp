class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> res;
        if(array.size()==0) return res ;
      
 ////////////////乘积最小是障眼法，实际上找到的第一组符合条件的，就是最小的，
        ////详见讨论区的相关证明
 /*可以这样证明：考虑x+y=C（C是常数），x*y的大小。不妨设y>=x，y-x=d>=0，即y=x+d,
2x+d=C, x=(C-d)/2, x*y=x(x+d)=(C-d)(C+d)/4=(C^2-d^2)/4，也就是x*y是一个
关于变量d的二次函数，对称轴是y轴，开口向下。d是>=0的，d越大, x*y也就越小。*/
         int left=0,right=array.size()-1;
        while(left<right){
            if(array[left]+array[right]==sum){
               
                 res.push_back(array[left]);
                 res.push_back(array[right]);   
                 break;
                
            }
            else  if(array[left]+array[right]<sum){left++;}
            else{
                
                right--;
            }
            
        }
        return res;
    }
};