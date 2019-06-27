class Solution {
public:
    vector<int>res;
    void Insert(int num)
    {
        res.push_back(num);
        sort(res.begin(),res.end());
    }//二刷补充：剑指上讨论了几种想法，最终用大顶堆，小顶堆来实现的，
//方法过于简单？用最大堆和最小堆实现，具体见评论区的 马客(Mark)
    
    //目前有：自己简单的，自己大小顶堆的(最新一次提交记录)，马客的
    double GetMedian()
    { double ans;
        int len=res.size();
     if(len==0) return ans;
        if(len%2==0){
            ans= (res[len/2]+res[len/2-1])/2.0;
            return ans;
        }
        else{ ans= res[len/2];
            return ans;
            }
    
    }

};