class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
       if(length<=0)  return false;
        for(int i=0;i<length;i++){
            if(numbers[i]<0 || numbers[i]>=length) return false;
            while(numbers[i]!=i){
                if(numbers[i]==numbers[numbers[i]]){
                   *duplication=numbers[i];
                    return true;
                }
                int tmp=numbers[i];
                numbers[i]=numbers[ numbers[i]];
                numbers[tmp]=tmp;
            }
        }
        
        return false;
    }
};