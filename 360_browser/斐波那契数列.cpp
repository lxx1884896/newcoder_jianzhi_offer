//链接：https://www.nowcoder.com/questionTerminal/c6c7742f5ba7442aada113136ddea0c3
//来源：牛客网
//迭代方法，用两个变量记录fn-1和fn-2:
class Solution {
public:
    int Fibonacci(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        int numfn1 = 0, numfn2 = 1;
        int currentnum;
        for(int i=2; i<=n; ++i) {
            currentnum = numfn1+numfn2;
            numfn1 = numfn2;
            numfn2 = currentnum;
        }
        return currentnum;
    }
};