class Solution {
public:
    int GetUglyNumber_Solution(int index) {
     
    if(index<=0) return 0;
    vector<int> res(1,1);
    int i2=0,i3=0,i5=0,mn;
     while(res.size()<index){
        int m2=res[i2]*2;
        int m3=res[i3]*3;
        int m5=res[i5]*5;
          mn =min(m2,min(m3,m5));
         
         if(mn==m2)i2++;
          if(mn==m3)i3++;
          if(mn==m5)i5++;
         res.push_back(mn);
     }  
        return res.back();
    }
};