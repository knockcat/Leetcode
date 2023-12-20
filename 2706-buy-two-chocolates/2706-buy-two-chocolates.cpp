class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int sum = prices[0] + prices[1];
        return (sum > money)?money: (money - sum);
    }
};