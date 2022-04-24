// 705.✅ Design HashSet

class MyHashSet
{
public:
    vector<bool> ans;
    MyHashSet()
    {
        ans.resize(1e6 + 1, false);
    }

    void add(int key)
    {
        ans[key] = true;
    }

    void remove(int key)
    {
        ans[key] = false;
    }

    bool contains(int key)
    {
        return ans[key];
    }
};