class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0, num = -1;
        
        for(auto& ele : nums)
        {
            if(cnt == 0)
            {
                num = ele;
                cnt = 1;
            }
            else if(ele == num)
                ++cnt;
            else
                --cnt;
        }
        
        return num;
    }
};