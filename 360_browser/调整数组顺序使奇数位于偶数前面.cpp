

////两个思路吧，第一个思路：类似冒泡算法，前偶后奇数就交换：
//class Solution {
//public:
//    void reOrderArray(vector<int> &array) {
// 
//         
//        for (int i = 0; i < array.size();i++)
//        {
//            for (int j = array.size() - 1; j>i;j--)
//            {
//                if (array[j] % 2 == 1 && array[j - 1]%2 == 0) //前偶后奇交换
//                {
//                    swap(array[j], array[j-1]);
//                }
//            }
//        }
//    }
//};



class Solution {
public:  //非寻常解法还有待进一步挖掘
    void reOrderArray(vector<int> &array) {
        
        vector<int> arr1,arr2;
        
        for(int i=0;i<array.size();i++){
            
            if(array[i]%2==1){
                
                arr1.push_back(array[i]);
            }
            
            else{
                
                arr2.push_back(array[i]);
            }
        }
        
        int len1=arr1.size(),len2=arr2.size();
        for(int i=0;i<len1;i++){
            
            array[i]=arr1[i];
        }
        for(int i=0;i<len2;i++){
            
            array[i+len1]=arr2[i];
        }
        
    }
};