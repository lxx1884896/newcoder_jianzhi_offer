class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {///详见讨论区 我去个地方啊 ，忆水寒
        if(matrix==NULL||rows<1||cols<1||str==NULL) return false;
       vector<bool> flag(rows*cols,false);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
               if (helper(matrix,rows,cols,flag,i,j,0,str)){
                   
                   return true;
               }
            }
        }
        return false;
    }
    
    bool helper(char* matrix,int rows,int cols, vector<bool> &flag,int i,int j,int k,char* str){
     ////因为是一维数组存放二维的值，index值就是相当于二维数组的（i，j）在一维数组的下标
        int  index=i*cols+j;
     if(i<0 ||i>=rows || j<0 || j>=cols ||flag[index]==true || matrix[index]!=str[k]) return false;
        flag[index]=true;
         if(str[k+1]=='\0') return true;
        if(helper(matrix,rows,cols,flag,i+1,j,k+1,str)||
          helper(matrix,rows,cols,flag,i,j+1,k+1,str) ||
           helper(matrix,rows,cols,flag,i,j-1,k+1,str) || 
            helper(matrix,rows,cols,flag,i-1,j,k+1,str) 
          ){
            
            return true;
        }
        
        flag[index]=false;
        return false;
        
    }


};