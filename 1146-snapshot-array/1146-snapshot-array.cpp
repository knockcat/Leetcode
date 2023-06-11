class SnapshotArray {
public:
    
    map<int, map<int,int>> mp;
    int cnt = 0;
    
    SnapshotArray(int length) {
        for(int i = 0; i < length; ++i)
        {
            map<int,int> mp2;
            mp2[0] = 0;
            mp[i] = mp2;
        }
    }
    
    void set(int index, int val) {
        mp[index][cnt] = val;
    }
    
    int snap() {
        ++cnt;
        
        return cnt-1;
    }
    
    int get(int index, int snap_id) {
        
        auto here = mp[index].upper_bound(snap_id);
        --here;
        return here->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */