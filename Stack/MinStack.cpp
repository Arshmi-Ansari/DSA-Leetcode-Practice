// Leetcode : 155  -->  Min Stack
// Time Complexity : O(1)
// Space Complexity : O(n)

class MinStack {
    int *arr;
    int *minArr;
    int size;
    int topIndex;
public:
    MinStack() {
        size = 10000;
        topIndex = -1;
        arr = new int[size];
        minArr = new int[size];
    }
    
    void push(int val) {
        if(size - topIndex > 1){
            topIndex++;
            arr[topIndex] = val;

            if(topIndex == 0){
                minArr[topIndex] = val;
            }
            else{
                minArr[topIndex] = min(val, minArr[topIndex-1]);
            }
        }
    }
    
    void pop() {
        if(topIndex >= 0){
            topIndex--;
        }
    }
    
    int top() {
        if(topIndex >= 0){
            return arr[topIndex];
        }
        return -1;
    }
    
    int getMin() {
        if(topIndex >= 0){
            return minArr[topIndex];
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
