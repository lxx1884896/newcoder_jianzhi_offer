class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size()<2) return;
      
      int tmp=data[0];
  for(int i=1;i<data.size();i++)
   tmp=tmp^data[i];
        int index=0;
        while((tmp&1)==0){
              
       
          tmp= tmp >> 1;
             index++;
        }
        *num1=*num2=0;
        for(int i=0;i<data.size();i++){
            
            if(is_bit(data[i],index))
                *num1^=data[i];
            else *num2^=data[i];
        }
        
    }
    bool is_bit(int num,int index){
      num= num >> index;
        return (num&1);
    }
};