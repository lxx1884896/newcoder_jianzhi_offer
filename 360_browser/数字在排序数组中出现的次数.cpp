class Solution {
public://二刷补充：剑指上有o(logn)的，用二分查找，找到k的第一个和最后一个位置
    int GetNumberOfK(vector<int> data ,int k) {
        if(data.size()==0) return 0;
        //讨论区大多数用二分查找的递归和非递归形式
///////下面链接有详细解释：【LeetCode & 剑指offer刷题】数组题8：53 数字在排序数组中出现的次数
//- wikiwen - 博客园  https://www.cnblogs.com/wikiwen/p/10224328.html        
        //另一种方法，先求出一个k的坐标，然后求这个坐标左边k的个数和右边k的个数
        
        //参看评论区drdr的做法  ，查找k+0.5,k-0.5的位置
        
        
        int cnt=0;
        
        for(int i=0;i<data.size();i++){
            
            if(data[i]==k)
                cnt++;
        }
        
        return cnt;
    }
};