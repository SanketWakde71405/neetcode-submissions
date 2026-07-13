class MinStack {
    int Top;
    vector<int> arr;
    vector<int> minSt;

public:
    MinStack() {
        this->Top=-1;
    }
    
    void push(int val) {
        this->arr.push_back(val);
        this->Top++;

        if (minSt.empty())
            minSt.push_back(val);
        else
            minSt.push_back(min(val, minSt.back()));
    }
    
    void pop() {
        if(this->isEmpty()) return;
        this->arr.pop_back();
        this->Top--;
        minSt.pop_back();
    }
    
    int top() {
        if(this->isEmpty()) return -1;
        return this->arr[this->Top];
    }
    
    int getMin() {
        if (minSt.empty()) return -1;
        return minSt.back();
    }

    bool isEmpty(){
        if(this->Top==-1) return true;
        return false;
    }
};
