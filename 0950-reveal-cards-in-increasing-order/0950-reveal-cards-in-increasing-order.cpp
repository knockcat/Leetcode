class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.rbegin(), deck.rend());
        deque<int> d;
        d.push_back(deck[0]);
        for (int i = 1; i < deck.size(); i++) {
            d.push_front(d.back());
            d.pop_back();
            d.push_front(deck[i]);
        }
        vector<int> res(d.begin(), d.end());
        return res;
    }
};