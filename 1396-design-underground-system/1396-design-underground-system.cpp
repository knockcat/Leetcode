class UndergroundSystem {

private:
    map<int, pair<string, double>> mp;
    map<pair<string,string>, pair<int, double>> links;
    
public:

    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp.insert({id, {stationName, t}});
    }
    
    void checkOut(int id, string stationName, int t) {
        
        auto inTime = mp[id];
        
        string checkInStationName = inTime.first;
        double checkInStationTime = inTime.second;
        
        double currTime = t - checkInStationTime;
        
        if(links.find({checkInStationName,stationName}) != links.end()) 
        {
            auto here = links[{checkInStationName,stationName}];
        
            int cnt = here.first;
        
            double prevValue = here.second;
        
            links[{checkInStationName, stationName}]={cnt + 1, prevValue + currTime};
        }
        else
        {
            links.insert({{checkInStationName, stationName},{1, currTime}});
        }
        
        mp.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        auto here = links[{startStation, endStation}];
        
        return (double)(here.second/here.first);
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */