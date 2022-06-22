// This code is written by Afif Islam
// Stack class.
class Stack {
    int idx;
    int *arr;
    int size;
public:
    
    Stack(int capacity) {
        // Write your code here.
        size=capacity;
        idx=-1;
        arr = new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if(idx!=size-1){
            idx++;
            arr[idx]=num;
        }
        return;
    }

    int pop() {
        // Write your code here.
        if(idx==-1) return -1;
        int i=arr[idx];
        idx--;
        return i;
    }
    
    int top() {
        // Write your code here.
        return idx!=-1?arr[idx]:-1;
    }
    
    int isEmpty() {
        // Write your code here.
        return idx==-1?1:0;
    }
    
    int isFull() {
        // Write your code here.
        return idx==size-1?1:0;
    }
    
};