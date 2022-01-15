// 167. Two Sum II - Input Array Is Sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> v;
        int l = 0, r = numbers.size() - 1;
        while(l < r)
        {
            if(numbers[l] + numbers[r] == target)
            {
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else if(numbers[l] + numbers[r] < target){
                l++;
                
            }
            else 
                r--;
            
        }
        return v;
    }
};