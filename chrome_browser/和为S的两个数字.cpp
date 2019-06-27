class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int len=array.size();
        if(len<2) return {};
        int m,n,res;
        int i=0,j=len-1;
        vector<int> tmp;
        while(i<j){
            if(array[i]+array[j]==sum){
               
              
                    
                    tmp.push_back(array[i]);
                    tmp.push_back(array[j]);
                    break;
                
               
            }
             else if(array[i]+array[j]<sum) i++;
                else j--;
        }
        
        
        return tmp;
        
    }
};