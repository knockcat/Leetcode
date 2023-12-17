class FoodRatings {
public:
    map<string,set<pair<int,string>>> s;
    unordered_map<string,string> cus;
    unordered_map<string,int> rat;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();++i)
        {
            s[cuisines[i]].insert({-ratings[i],foods[i]});
            cus[foods[i]]=cuisines[i];
            rat[foods[i]]=-ratings[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        int r=rat[food];
        string c=cus[food];
        s[c].erase({r,food});
        s[c].insert({-newRating,food});
        rat[food]=-newRating;
    }
    
    string highestRated(string cuisine) {
        pair<int,string> p= *(s[cuisine].begin());
        return p.second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */