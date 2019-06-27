class Solution {
public://详情见讨论区的 L0L，披萨大叔
    bool IsContinuous( vector<int> numbers ) {
        int len=numbers.size();
        if(len==0) return false;
        if(len!=5) return false;
        sort(numbers.begin(),numbers.end());
        int cnt=0;
        for(int i=0;i<len&&numbers[i]==0;i++){
            
            cnt++;
        }
        if(cnt>4) return false;
        
        for(int i=cnt+1;i<len;i++){
            
            if(numbers[i]==numbers[i-1]) return false;
        }
        
        int dif=numbers[4]-numbers[cnt];
        if(dif<=4) return true;
        return false;
    }
};