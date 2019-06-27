class Solution {
public:
    void reOrderArray(vector<int> &array) {
        
        if(array.empty()) return;
        vector<int> p,q;
        for(int i=0;i<array.size();i++){
           if((array[i]&1)==1) p.push_back(array[i]);
           else{q.push_back(array[i]);}
        }
       
        int l1=p.size(),l2=q.size();
        for(int i=0;i<l1;i++){
            array[i]=p[i];
        }
        for(int j=0;j<l2;j++){
            array[j+l1]=q[j];
        }
    }
};