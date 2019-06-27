class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {  int len=num.size();
    
     vector<int> res;
     deque<int> s;
        if(len==0 || size==0 || size>len) return{};
     for(int i=0;i<len;i++){
        while(s.size() && num[s.back()]<=num[i]){
            s.pop_back();
        }
        while(s.size() && (i-s.front()+1)>size){
            s.pop_front();
        }
            s.push_back(i);
            if(i>=size-1) res.push_back(num[s.front()]);
        
     }
        return res;
        
    }
};