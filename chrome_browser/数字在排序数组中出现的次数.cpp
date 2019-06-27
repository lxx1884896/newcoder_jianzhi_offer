class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int len = data.size();
        if(len==0) return 0;
        int cnt=0;
        for(int i=0;i<len;i++){
            if(data[i]==k)
                cnt++;
        }
        return cnt;
    }
};