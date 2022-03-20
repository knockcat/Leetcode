// 1007. Minimum Domino Rotations For Equal Row

/*Time Complexity O(n)
Space Complexity O(1)*/

class Solution
{
public:
    int dominoRotations(vector<int> &tops, vector<int> &bottoms)
    {
        int minRotation = INT_MAX;
        for (int i = 1; i <= 6; ++i)
        {
            int swap = 0, j;
            for (j = 0; j < tops.size(); ++j)
            {
                if (tops[j] == i)
                    continue;
                else if (bottoms[j] == i)
                    ++swap;
                else
                    break;
            }

            // if we reach at the end of vector && minRotation > swap
            if (j == tops.size() && minRotation > swap)
                minRotation = swap;
        }
        return minRotation == INT_MAX ? -1 : minRotation;
    }

    int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
    {

        // try to make all a faces same
        int ab = dominoRotations(tops, bottoms);

        // try to make all b faces same
        int ba = dominoRotations(bottoms, tops);

        return ab == -1 ? ba : ba == -1 ? ab
                                        : min(ab, ba);
    }
};

// another approach

/*Time Complexity O(n)
Space Complexity O(1)*/
class Solution
{
public:
    int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
    {
        int n = tops.size();

        // vector for faceA , faceB & same for accumulating when,
        // both faceA & faceB have same values
        vector<int> faceA(7), faceB(7), same(7);

        for (int i = 0; i < n; ++i)
        {
            ++faceA[tops[i]];
            ++faceB[bottoms[i]];

            if (tops[i] == bottoms[i])
                ++same[tops[i]];
        }

        int minRotation = INT_MAX;

        for (int i = 1; i <= 6; ++i)
        {
            if (faceA[i] + faceB[i] - same[i] == n)
                minRotation = min(minRotation, min(faceA[i], faceB[i]) - same[i]);
        }

        return minRotation == INT_MAX ? -1 : minRotation;
    }
};