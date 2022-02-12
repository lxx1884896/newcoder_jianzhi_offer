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

// 若都使用右边的节点进行标记，可以省去第10行的判断，如下（注：最终只可以使用r--）：

class Solution {
public:
    int minNumberInRotateArray(vector<int> arr) {
        int len=arr.size();
        int l=0,r=len-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(arr[mid]<arr[r]){
                r=mid;
            }
            
            else if(arr[mid]>arr[r]){
                l=mid+1;
            }
            else {r--;}
        }
        
        return arr[l];
    }
};