class Solution {
public://详见讨论区 箫筱沐羽，大闲人柴毛毛，zhuma
    int Add(int num1, int num2)
    {
        while(num2!=0){
            int sum=num1^num2;//加
            int carry =(num1&num2)<<1;//进位
            num1=sum;
            num2=carry;
            
        }
        return num1;
        
    }
};