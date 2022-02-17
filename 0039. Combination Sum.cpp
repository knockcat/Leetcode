class Solution
{
public:
    /*
    1. Sort the vector(non-decreasing).
    2. First remove all the duplicates from vector.
    3. Then use recursion and backtracking to solve
       the problem.
       (A) If at any time sub-problem sum == 0 then
           add that vector to the result (vector of
           vectors).
       (B) Else if sum is negative then ignore that
           sub-problem.
       (C) Else insert the present index in that
           vector to the current vector and call
           the function with sum = sum-ar[index] and
           index = index, then pop that element from
           current index (backtrack) and call the
           function with sum = sum and index = index+1
        */

    void Sum(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> &r, int i)
    {

        if (target == 0)
        {
            // if we get exact answer
            res.push_back(r);
            return;
        }

        while (i < candidates.size() && target - candidates[i] >= 0)
        {
            // Till every element in the array starting
            // from i which can contribute to the target
            r.push_back(candidates[i]); // add them to vector

            // recur for next numbers
            Sum(candidates, target - candidates[i], res, r, i);
            ++i;

            // Remove number from vector (backtracking)
            r.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end()); // sort candidates array

        // remove duplicates
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

        vector<int> r;
        vector<vector<int>> res;

        Sum(candidates, target, res, r, 0);

        return res;
    }
};