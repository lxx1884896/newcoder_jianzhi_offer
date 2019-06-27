class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int len1=array.size();
        int len2=array[0].size();
 //Candy_吴的个人主页_牛客网  https://www.nowcoder.com/profile/6470790/codeBookDetail?submissionId=12712025
        //看其中  id为楚云天 的两种思路， 二分和这个
        if(len1==0 || len2==0) return false;
        int i=len1-1,j=0;//左下角的
        
        while(i>=0&& j<len2){
            if(array[i][j]==target){
                return true;
                
            }
            
            else if(array[i][j]<target){
                j++;
                
            }
            
            else i--;
            
        }
        
        return false;
    }
};