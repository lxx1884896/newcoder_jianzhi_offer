class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int res;
        if(!stack2.empty()){
            res= stack2.top();
            
            stack2.pop();
            
            return res;
            
            
        }
        
        else if(stack1.size()>0){
            while(stack1.size()>0){
                res=stack1.top();
            stack2.push(res);
            stack1.pop();
            }
            
            res=stack2.top();
            stack2.pop();
        }
        
        return res;
        
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};