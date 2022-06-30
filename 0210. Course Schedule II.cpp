// 210.✅ Course Schedule II

class Solution
{
public:
    bool isCycle(int sv, vector<int> adj[], vector<int> &visited, stack<int> &st)
    {
        if (visited[sv] == 2)
            return true;
        visited[sv] = 2;

        for (auto itr : adj[sv])
        {
            if (visited[itr] != 1)
            {
                if (isCycle(itr, adj, visited, st))
                    return true;
            }
        }

        visited[sv] = 1;
        st.push(sv);
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> adj[numCourses];

        for (auto edge : prerequisites)
        {
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> topo;
        stack<int> st;
        vector<int> visited(numCourses, 0);
        for (int i = 0; i < numCourses; ++i)
        {
            if (!visited[i])
                if (isCycle(i, adj, visited, st))
                    return {};
        }

        while (!st.empty())
        {
            topo.push_back(st.top());
            st.pop();
        }

        return topo;
    }
};