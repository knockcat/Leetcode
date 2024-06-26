class MedianFinder {
public:
    
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxHeap.empty() and minHeap.empty())    
            maxHeap.push(num);
        else if(num > maxHeap.top())
            minHeap.push(num);
        else
            maxHeap.push(num);
        
        int n = maxHeap.size();
        int m = minHeap.size();
        
        if(abs(n-m) == 2)
        {
            if(n > m)
            {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            else
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }
    }
    
    double findMedian() {
        if(maxHeap.size() == minHeap.size())
            return (maxHeap.top() + minHeap.top()) / 2.0;
        else if(maxHeap.size() > minHeap.size())
            return maxHeap.top();
        else
            return minHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */