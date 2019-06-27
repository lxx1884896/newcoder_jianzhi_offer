class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> res;
        
       
      
        int m=matrix.size();
        if(m==0) return res;
        int n=matrix[0].size();
          if(n==0) return res;
        int top=0,left=0,right=n-1,bottom=m-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++) res.push_back(matrix[top][i]);
            for(int i=top+1;i<=bottom;i++) res.push_back(matrix[i][right]);
            
           
                for(int i=right-1;i>=left && bottom >top;i--) res.push_back(matrix[bottom][i]); 
           
            
            
               
                for(int i=bottom-1;i>top && right > left;i--)res.push_back(matrix[i][left]);
           
            
            
            top++;left++;right--;bottom--;
        }
        
        return res;
        
    }
};