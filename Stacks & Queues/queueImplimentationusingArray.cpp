class Queue {
    int start;
    int end;
    int *arr;
    int count;
    int size;
public:
    Queue() {
        // Implement the Constructor
        start=0;
        end=0;
        count=0;
        size=100001;
        arr=new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return start==end;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        //size=sizeof(arr)/sizeof(arr[0]);
        if(end==size-1) return;
        arr[end]=data;
        //count++;
        end++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(start == end){
            return -1;
        }
        else{
           int  ans = arr[start];
            arr[start] = -1;
            start ++;
            if(start == end){
                start = 0;
                end = 0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
       if(start == end){
            return -1;
        }
        else{
            return arr[start];
        }
    } 
};