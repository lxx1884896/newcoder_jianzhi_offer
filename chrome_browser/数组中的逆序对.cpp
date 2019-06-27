
////详情见讨论区 忆水寒  rs勿忘初心

/*参考《剑指offer》，有两种思路。第一就是暴力求解法，时间复杂度为o（n^2）,空间复杂度o(1)
第二种思路就是使用归并排序的思想进行处理，时间复杂度o(nlog(n)),空间复杂度0（n）*/
class Solution {
public://利用LeetCode315上的二分搜索改的，暂时没通过
    int InversePairs(vector<int> nums) {
        if(nums.size()<=1) return 0;//如果少于等于1个元素，直接返回0
         vector<int> t, res(nums.size());
        for (int i = nums.size() - 1; i >= 0; --i) {
            int left = 0, right = t.size();
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (t[mid] >= nums[i]) right = mid;
                else left = mid + 1;
            }
            res[i] = right;
            t.insert(t.begin() + right, nums[i]);
        }
        
        int sum=0;
        for(int i=0;i<res.size();i++){sum+=res[i];}
        return sum%1000000007;
    }
};