class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.empty() || popV.empty()) return false;
        stack<int> s;
        int index=0;
        for(int i=0;i<pushV.size();i++){
            s.push(pushV[i]);
            while(!s.empty() && s.top()==popV[index]){
                s.pop();
                index++;
            }
            
           
        }
         return s.empty();
    }
};