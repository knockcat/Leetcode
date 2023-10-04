class MyHashSet {
public:
    
    vector<list<int>> hash;
    int size = 10001;
    
    MyHashSet() {
        hash.resize(size);
    }
    
    void add(int key) {
        
        int idx = key % size;
        
        for(auto& itr : hash[idx])
        {
            if(itr == key)
            {
                return;
            }
        }
        
        hash[idx].push_back(key);
    }
    
    void remove(int key) {
        
        int idx = key % size;
        
        for(auto itr = hash[idx].begin(); itr != hash[idx].end(); ++itr)
        {
            if(*itr == key)
            {
                hash[idx].erase(itr);
                return;
            }
        }
        
    }
    
    bool contains(int key) {
        
        int idx = key % size;
        
        for(auto& itr : hash[idx])
        {
            if(itr == key)
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */