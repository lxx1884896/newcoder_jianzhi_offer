class Solution {
public:
    void push(int value) {
      if(stack1.empty() || value<=stack2.top()) {
          stack1.push(value);
          stack2.push(value);
      } 
        else{stack1.push(value);}
    }
    void pop() {
       if(stack1.empty()) return ;
        if(stack1.top()==stack2.top()){
            
            stack1.pop();
            stack2.pop();
        }
        else{
            stack1.pop();
        }
    }
    int top() {
      return stack1.top();  
    }
    int min() {
      return stack2.top();  
    }
private:
    stack<int> stack1;
    stack<int> stack2;

};