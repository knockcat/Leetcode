class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
    int si = h.size(), sj = h[0].size();
    vector<vector<int>> eff(si, vector<int>(sj, 1000000));
    vector<int> dir{0, 1, 0, -1, 0};
    auto comp = [&](const array<int, 3> &p1, const array<int, 3> &p2) { return p1[0] >= p2[0]; };
    priority_queue<array<int, 3>, vector<array<int, 3>>, decltype(comp)> pq(comp);
    eff[0][0] = 0;
    pq.push({0, 0, 0});
    while(!pq.empty()) {
       auto [e, i, j] = pq.top();
       pq.pop();
       if (i == si - 1 && j == sj - 1)
           break;
       for (auto d = 0; d < 4; ++d) {
           int x = i + dir[d], y = j + dir[d + 1];
           if (x >= 0 && y >= 0 && x < si && y < sj) {
               int new_eff = max(eff[i][j], abs(h[i][j] - h[x][y]));
               if (new_eff < eff[x][y]) {
                   eff[x][y] = new_eff;
                   pq.push({new_eff, x, y});
               }
           }
        }
    }
    return eff[si - 1][sj - 1];
}
};