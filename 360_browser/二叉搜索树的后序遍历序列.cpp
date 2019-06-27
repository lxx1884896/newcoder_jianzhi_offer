class Solution {

    
    /*分析：在后序遍历序列中，最后一个数字是树的根节点的值。数组中前面的数字可以分为两部分：第一部分是
    左子树节点的值，它们都比根节点的值小；第二部分是右子树节点的值，它们都比根节点的值大。所以先取数组
    中最后一个数，作为根节点。然后从数组开始计数比根节点小的数，并将这些记作左子树，然后判断后序的树是否
    比根节点大，如果有点不满足，则跳出，并判断为不成立。全满足的话，依次对左子树和右子树递归判断。*/
    
    
    
    public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        
        if (sequence.size()==0) return false;
        
        return helper(sequence,0,sequence.size()-1);
        
        
    

    }
    
    bool helper(vector<int> sequence,int start,int end){
        if(start>=end) return true;
        
        int root=sequence[end];
        int i=start;
        while(sequence[i]<root){
           i++; 
            
        }
        
        int j=i;
        
        while(j<end){
            
            if(sequence[j]<root){
                
                return false;
            }
            
            j++;
        }
        
        bool left=helper(sequence,start,i-1);
        
        bool right=helper(sequence,i,end-1);
        
        return left&&right;
        
    }
};