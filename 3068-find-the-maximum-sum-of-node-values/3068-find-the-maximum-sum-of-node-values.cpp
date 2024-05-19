class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        
    long long sum = 0;
    int smallest_gain = 2 * k + 1;
    int smallest_lost = 2 * k + 1;
    int gain_count = 0;
    for (int num : nums) {
      int gain = (num ^ k) - num;
      if (gain > 0) {
        smallest_gain = min(smallest_gain, gain);
        sum += num + gain;
        ++gain_count;
      } else {
        smallest_lost = min(smallest_lost, -gain);
        sum += num;
      }
    }
    if (gain_count % 2 == 1) {
      sum -= min(smallest_gain, smallest_lost);
    }
    return sum;
        
    }
};