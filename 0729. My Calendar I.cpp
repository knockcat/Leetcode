729. My Calendar I

class MyCalendar {
    private:
        map<int,int> m;
    
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        int sum = 0;
        m[start]++;
        m[end]--;
        
        for(auto it = m.begin(); it != m.end(); it++)
        {
            sum += it->second;
            // before closing if any case happen where we start another event, before we could a -1 to close a +1 , we gave extra +1 -> intersection  (1 + (-1) + 1 + 1 so sum become greater than 1)
                if(sum > 1)
                {
                    m[start]--;
                    m[end]++;
                    return false;
                }
        }
       return true;
    }
};