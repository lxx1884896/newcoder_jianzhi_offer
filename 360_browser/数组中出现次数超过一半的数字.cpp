class Solution {
public:
    //二刷补充：可以用partition找中位数 o(n)  （该方法试验后不太行？），还有 剑指上：如果下一个相同则加一，不同则减，在下面贴出
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int len=numbers.size();
        if(len==0) return 0;
        
        unordered_map<int,int>m;
        
        for(int i=0;i<len;i++){
            
            m[numbers[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            
            if(it->second>len/2){
                
                return it->first;
            }
        }
        
        return 0;
        
    }
};


//leetcode   AC代码
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int len=nums.size();
        int result=nums[0];
        int times=1;
        for(int i=1;i<len;i++){
            
            if(times==0){
                
                result=nums[i];
                times=1;
            }
            else if(nums[i]==result){
                
                times++;
            }
            
            else{
                
                times--;
            }
        }
        
        return result;
    }       
};