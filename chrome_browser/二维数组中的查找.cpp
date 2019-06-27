class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
       int i=array.size();
       int j=array[0].size();
       if(i==0 || j==0) return false;
        int row=i-1,col=0;
       while(row>=0 && col<j){
           if(target < array[row][col]){
              row--; 
           }
           else if(target > array[row][col]){
               col++;
           }
           
           else return true;
           
       }
        return false;
    }
};