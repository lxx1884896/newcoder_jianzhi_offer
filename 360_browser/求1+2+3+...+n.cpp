class Solution {
public:
    int Sum_Solution(int n) {//二刷补充：注意剑指上的好几种方法
        int res=n;
       //&&后面的一句本来就>0，这么写是为了bool型的，能执行
        bool ans=(n>0)&&((res+=Sum_Solution(n-1))>0);
        return res;
    }
};