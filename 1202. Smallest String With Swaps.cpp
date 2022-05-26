// 1202. Smallest String With Swaps

class Solution
{
public:
    static const int N = 100001;
    vector<int> vec[N];
    bool checked[N];

    void DFS(string &s, int vertex, vector<char> &characters, vector<int> &indices)
    {
        // Adding the character and index
        characters.push_back(s[vertex]);
        indices.push_back(vertex);

        checked[vertex] = true;

        for (int itr : vec[vertex])
        {
            if (!checked[itr])
            {
                DFS(s, itr, characters, indices);
            }
        }
    }

    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs)
    {
        // creating vecacency list
        for (vector<int> edge : pairs)
        {
            int source = edge[0];
            int destination = edge[1];

            vec[source].push_back(destination);
            vec[destination].push_back(source);
        }

        for (int vertex = 0; vertex < s.size(); vertex++)
        {
            // If not covered in the DFS
            if (!checked[vertex])
            {
                vector<char> characters;
                vector<int> indices;

                DFS(s, vertex, characters, indices);
                // Sort
                sort(characters.begin(), characters.end());
                sort(indices.begin(), indices.end());

                // storing the sorted character
                for (int index = 0; index < characters.size(); index++)
                {
                    s[indices[index]] = characters[index];
                }
            }
        }

        return s;
    }
};