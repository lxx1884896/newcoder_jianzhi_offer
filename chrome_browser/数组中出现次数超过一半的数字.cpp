class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    
    int len=numbers.size();
        if(len==0) return 0;
        map<int,int> m;
        for(int i=0;i<len;++i){
            m[numbers[i]]++;
        }
        for(auto t=m.begin();t!=m.end();t++ ){
            if(t->second > len/2)
                return t->first;
        }
        return 0;
    }
};