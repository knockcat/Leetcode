1431.✅ Kids With the Greatest Number of Candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        
        for(int i = 0; i<candies.size(); i++)
        {
            int candy = candies[i] + extraCandies;
            
            if(max_all(candies,candy))
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        return ans;
    }
    
    bool max_all(vector<int> candies,int candy)
    {
        for(int i = 0; i<candies.size(); i++)
        {
            if(candy < candies[i])
                return false;
        }
        return true;
    }
};

// Another Approach

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        
        int max = *max_element(candies.begin(), candies.end());
        
        for(int i=0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= max)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        return ans;
    }
};


