class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        if(length<=0) return false;
        set<int> res;
   //讨论区的 大闲人柴毛毛  ，  
  //二刷补充：不占用额外内存的话，剑指上的办法 大闲人柴毛毛的办法 
        
        for(int i=0;i<length;i++){
            if(numbers[i]<=0||numbers[i]>length-1) return false;//判断每一个元素是否非法
            if(res.find(numbers[i])!=res.end()) 
            {
                 duplication[0]=numbers[i];
                 break;
            }
            res.insert(numbers[i]);
        }
        
        int len1=res.size();
        if(len1==length) return false;
        return true;
    }
};