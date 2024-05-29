class Solution {
public:
    int numSteps(string s) {
        int step = 0;

        while (s != "1") {

            if (s.back() == '0') s.pop_back();
            else {

                while (!s.empty() && s.back() == '1') {
                    s.pop_back();
                    ++step;
                }

                if (s.empty()) return step + 1;
                else s.back() = '1';

            }
            ++step;
        }

        return step;
    }
};