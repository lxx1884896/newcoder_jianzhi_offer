class Solution {
public:
    void push(int value) {
        
        if(data.empty() || value<=stack_min.top()){
            
            data.push(value);
            
            stack_min.push(value);
        }
        
        else{ data.push(value);}
        
       
        
    }
    void pop() {
        if(data.empty())  return ;
        if(data.top()==stack_min.top()){
            
            data.pop();
            stack_min.pop();
        }
        
        else{data.pop();}
        
    }
    int top() {
       return data.top();
    
    }
    int min() {
       return stack_min.top(); 
    }
    
    
private:
    stack<int> data;
    stack<int> stack_min;
};