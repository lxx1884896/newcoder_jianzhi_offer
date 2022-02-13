
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        //这里排序并不必须，只是为了子集中元素以递增排序
        sort(nums.begin(), nums.end());
        vector<vector<int>> subs;
        vector<int> sub;  
        genSubsets(nums, 0, sub, subs);
        return subs; 
    }
    void genSubsets(vector<int>& nums, int start, vector<int>& sub, vector<vector<int>>& subs) {
        //我们发现这里好像并没有递归出口，因为终止条件由下面for循环控制
        subs.push_back(sub);        
        for (int i = start; i < nums.size(); i++) {
            //情况一：子集包含元素nums[i]
            sub.push_back(nums[i]);
            //为何是i+1,因为已经解决了第i个元素，需要递归从第i+1个元素开始求解
            genSubsets(nums, i + 1, sub, subs);
            //情况二:子集不包含nums[i]，即略过第i个元素
            //可以想象，不去管上一条递归语句，当下一次循环到i+1时，第i个元素已经略过
            sub.pop_back();
        }
    }
};
