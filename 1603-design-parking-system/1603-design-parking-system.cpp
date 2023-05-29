class ParkingSystem {
public:
    
    unordered_map<int,int> mp;
    
    ParkingSystem(int big, int medium, int small) {
        
        mp.insert({1, big});
        mp.insert({2, medium});
        mp.insert({3, small});
        
    }
    
    bool addCar(int carType) {
        
        if(mp[carType] > 0)
        {
            --mp[carType];
            return true;
        }
    
        return false;
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */