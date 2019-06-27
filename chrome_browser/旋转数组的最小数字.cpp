class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
     int len=rotateArray.size();
        if(len==0) return 0;
        
       int left=0,right=len-1;
        while(left<right){
              //确认子数组是否是类似1,1,2,4,5,..,7的非递减数组
            if(rotateArray[left]<rotateArray[right]) return rotateArray[left];
            int mid=left+(right-left)/2;
            //如果左半数组为有序数组
            if(rotateArray[left]<rotateArray[mid]){
                left=mid+1;
                
            }
            //如果右半数组为有序数组
            else if(rotateArray[mid]<rotateArray[right]){
                right=mid;
            }
             //否则，rotateArray[left] == rotateArray[mid] == rotateArray[right]
            else{
                left++;
            }
        }
        
        return rotateArray[right];
    }
};