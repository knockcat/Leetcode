// 895.✅ Maximum Frequency Stack

class FreqStack
{
public:
    // freqMap is to map element to its frequency
    map<int, int> freqMap;

    // set map is to map frequency to the
    // element list with this frequency
    map<int, stack<int>> setMap;

    // for keeping record of maximum frequency
    int maxfreq = 0;

    FreqStack()
    {
        // KNOCKCAT
    }

    // insert
    void push(int val)
    {
        // frequency of x
        int freq = freqMap[val] + 1;

        // Mapping of x with its frequency
        freqMap[val] = freq;

        // if freq is greater than maxfreq
        // update max freq
        if (freq > maxfreq)
            maxfreq = freq;

        // Mapping element to  its frequency list
        setMap[freq].push(val);
    }

    // remove
    int pop()
    {
        // remove element from setMap
        // from maximum frequency list
        int top = setMap[maxfreq].top();
        setMap[maxfreq].pop();

        // decrement the frequcy of the popped element
        --freqMap[top];

        // if whole list popped decrement the max freq
        if (setMap[maxfreq].size() == 0)
            --maxfreq;
        return top;
    }
};
