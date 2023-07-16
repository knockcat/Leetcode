class Solution {
public:

vector<int>res;

void helper(int i,vector<int>&people_skill,int m,int mask,vector<int>&ans,vector<vector<int>>&dp)
{
  if(i == people_skill.size()) 
  {
    if(mask == ((1<<m)-1)) 
    {
      if(res.size() == 0 || (ans.size() < res.size())) res = ans; 
    }
    return;
  }

  if(dp[i][mask] != -1) 
  {
    if(dp[i][mask] <= ans.size()) return;
  }

  helper(i+1,people_skill,m,mask,ans,dp); 

  ans.push_back(i); 

  helper(i+1,people_skill,m,(mask|people_skill[i]),ans,dp); 

  ans.pop_back(); 

  if(ans.size() > 0) dp[i][mask] = ans.size();
}


 vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {

        int n = people.size();
        int m = req_skills.size();

        unordered_map<string,int>mpp; 

        for(int i = 0;i<m;++i) mpp[req_skills[i]] = (1<<i); 
        vector<int>people_skill;

        for(auto it : people) 
        {
          int mask = 0;
          for(int j = 0; j < it.size(); ++j)
          {
            if(mpp.count(it[j])) mask |= mpp[it[j]]; 
          }
          people_skill.push_back(mask);
        }

        vector<vector<int>> dp(n, vector<int>((1<<m),-1));
        vector<int>ans;

        helper(0,people_skill,m,0,ans,dp);
        return res;
    }
};