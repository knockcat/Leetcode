// 15. 3Sum

// 2 pointer approach

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sum;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++)
        {
            if(i != 0 && nums[i] == nums[i-1])
                continue;
            int j = i + 1;
            int k = nums.size() - 1;
            
            while(j<k)
            {
                if(nums[i] + nums[j] + nums[k] == 0)
                {
                    sum.push_back({nums[i],nums[j],nums[k]});
                    j++;
                while(j < k && nums[j] == nums[j-1])
                    j++;
                }
                else if(nums[i] + nums[j] +  nums[k] < 0)
                    j++;
                else
                    k--;
            }
        } 
        return sum;
    }
};

// naive approach O(n^3)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sum;
       
        sort(nums.begin(),nums.end());   
        
        for(int i = 0; i< nums.size(); i++)
        {
            if(i != 0 && nums[i] == nums[i-1])
                continue;
            
            for(int j = i+1; j<nums.size(); j++)
            {
                if(j != i+1 && nums[j] == nums[j-1])
                    continue;
                
                for(int k = j+1; k<nums.size(); k++)
                {
                    if(k != j+1 && nums[k] == nums[k-1])
                        continue;
                    
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        sum.push_back({nums[i], nums[j], nums[k]}); 
                        // cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                    }
                }
            }
        }
        return sum;
    }   
};