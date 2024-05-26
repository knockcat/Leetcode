class Solution {
private:
    static const int MOD = 1000000000 + 7;

public:
    int checkRecord(int n) {
        vector<vector<int>> prevDP(2, vector<int>(3, 1));

        for (int i = 1; i <= n; i++) {
            vector<vector<int>> newDP(2, vector<int>(3, 0));
            for (int a = 0; a < 2; a++) {
                for (int l = 0; l < 3; l++) {
                    // Pick P
                    newDP[a][l] += prevDP[a][2];
                    newDP[a][l] %= MOD;
                    if (a > 0) {
                        // Pick A
                        newDP[a][l] += prevDP[a - 1][2];
                        newDP[a][l] %= MOD;
                    }
                    if (l > 0) {
                        // Pick L
                        newDP[a][l] += prevDP[a][l - 1];
                        newDP[a][l] %= MOD;
                    }
                }
            }
            prevDP = newDP;
        }

        return prevDP[1][2];
    }
};