class SeatManager {
public:
    
    set<int> st;
    vector<int> seat;
    int counter = 1;
    int N;
    
    SeatManager(int n) {
        N = n;
        seat.resize(n+1, 0);    
    }
    
    int reserve() {
        
        if(!st.empty())
        {
            int least = *st.begin();
            st.erase(*st.begin());
            seat[least] = 1;
            return least;
        }
        
        if(counter <= N)
        {
            seat[counter] = 1;
            int smallestUnreserved = counter;
            ++counter;
            return smallestUnreserved;
        }
        
        return -1;
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
        seat[seatNumber] = 0;
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */