class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
      
        if(rows<=0 || cols<=0 || matrix==NULL ||str==NULL)  return false;
        if(strlen(str)>rows*cols) return false;
        vector<bool> flag(rows*cols,false);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
               if( path(matrix,rows,cols,i,j,flag,str,0))
                   return true;
            }
        }
        return false;
    
    }
    
    bool path(char* matrix,int rows,int cols,int i,int j,vector<bool> & flag ,char* str,int k){
        int index=i*cols+j;
        if( i<0 || i>=rows || j<0 || j>=cols || flag[index]==true ||  matrix[index]!=str[k])
            return false;
        if(str[k+1]=='\0') return true;
        flag[index]=true;
      if(path(matrix,rows,cols,i+1,j,flag,str,k+1)
       || path(matrix,rows,cols,i,j+1,flag,str,k+1)
       || path(matrix,rows,cols,i-1,j,flag,str,k+1)
       || path(matrix,rows,cols,i,j-1,flag,str,k+1)){
          return true;
      }  
        
        flag[index]=false;
        return false;
            
    }


};	