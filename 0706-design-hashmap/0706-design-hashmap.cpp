class MyHashMap {
public:
    
    vector<list<pair<int,int>> > hash;
    int size = 10001;
    
    MyHashMap() {
        hash.resize(size);
    }
    
    void put(int key, int value) {
        int idx = key % size;
        
        for(auto& [k, val] : hash[idx])
        {
            if(k == key)
            {
                val = value;
                return;
            }
        }
        
        hash[idx].push_back({key, value});
    }
    
    int get(int key) {
        
        int idx = key % size;
        
        if(hash[idx].empty())
            return -1;
        
        for(auto& [k, val] : hash[idx])
        {
            if(k == key)
                return val;
        }
        
        return -1;
    }
    
    void remove(int key) {
        
        int idx = key % size;
        
        for(auto itr = hash[idx].begin(); itr != hash[idx].end(); ++itr)
        {
            if(itr->first == key)
            {
                hash[idx].erase(itr);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */