class Solution {
public:
    void getMovingCount(int r,int c,int rows,int cols,int &count,vector<bool> &visited,int threshold){
        if(r<0 || r>=rows || c<0 || c>=cols || visited[r*cols+c]==true || getNum(r,c)>threshold)
            return;
        visited[r*cols+c]=true;
        count++;
        getMovingCount(r-1,c,rows,cols,count,visited,threshold);
        getMovingCount(r+1,c,rows,cols,count,visited,threshold);
        getMovingCount(r,c-1,rows,cols,count,visited,threshold);
        getMovingCount(r,c+1,rows,cols,count,visited,threshold);
    }
    int movingCount(int threshold, int rows, int cols){
        vector<bool> visited(rows*cols);
        int count=0;
        getMovingCount(0,0,rows,cols,count,visited,threshold);
        return count;
    }
    int getNum(int r,int c){
        int sum=0;
        while(r){
            sum+=r%10;
            r=r/10;
        }
        while(c){
            sum+=c%10;
            c=c/10;
        }
        return sum;
    }
};