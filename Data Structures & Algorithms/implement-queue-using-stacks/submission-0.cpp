class MyQueue {
    stack<int>st1, st2;
public:
    MyQueue(){}
    
    void push(int x) {
     
        while(!st1.empty()){
            int val=st1.top();
            st1.pop();
            st2.push(val);
        } 
           st1.push(x);
         while(!st2.empty()){
            int val=st2.top();
            st2.pop();
            st1.push(val);
        } 

    }
    
    int pop() {
        int val=st1.top();
        st1.pop();
        return val;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */