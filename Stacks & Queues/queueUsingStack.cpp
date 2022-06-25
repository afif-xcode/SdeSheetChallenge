// Code by Afif Islam
#include <stack>
class Queue {
    // Define the data members(if any) here.
    stack<int>st;
    stack<int>s;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        st.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(st.empty() && s.empty()) return -1;
        if(s.empty()){
            while(!st.empty()){
                s.push(st.top());
                st.pop();
            }
        }
        int ans=s.top();
        s.pop();
        return ans;
    }

    int peek() {
        // Implement the peek() function here.
        if(st.empty() && s.empty()) return -1;
        if(s.empty()){
            while(!st.empty()){
                s.push(st.top());
                st.pop();
            }
        }
        int ans=s.top();
        //s.pop();
        return ans;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return st.empty() && s.empty();
    }
};