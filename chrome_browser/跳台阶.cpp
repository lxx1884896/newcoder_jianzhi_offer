class Solution {
public:
    int jumpFloor(int number) {
       if(number<=0)  return 0;
        vector<int> res(number+1,0);
        res[1]=1,res[2]=2;
        for(int i=3;i<=number;i++){
            res[i]=res[i-1]+res[i-2];
        }
        
        return res[number];
    }
};