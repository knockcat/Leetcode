class SeatManager {
public:
    
    set<int> st;
    int counter = 1;
    int N;
    
    SeatManager(int n) {
        N = n;  
    }
    
    int reserve() {
        
        if(!st.empty())
        {
            int least = *st.begin();
            st.erase(*st.begin());
            return least;
        }
        
        if(counter <= N)
        {
            int smallestUnreserved = counter;
            ++counter;
            return smallestUnreserved;
        }
        
        return -1;
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */