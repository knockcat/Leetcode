class SummaryRanges {
public:
    
    set<int> s;
    
    SummaryRanges() {
    
    }
    
    void addNum(int value) {
        s.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        
       vector<vector<int>> res;
        
        int start = -1, end = -1;
        for(auto itr : s)
        {
            if(start == -1 and end == -1)
            {
                start = itr, end = itr;
            }
            end = itr;
            if(s.find(itr + 1) == s.end())
            {
                res.push_back({start,end});
                start = -1, end = -1;
            }
            else
            {
                continue;
            }
        }
           
        return res;
        
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */