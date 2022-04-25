// 706.✅ Design HashMap

class MyHashMap
{
public:
    int arr[1000001];
    MyHashMap()
    {
        memset(arr, -1, sizeof(arr));
        // fill(arr,arr + 1000000,-1 );
    }

    void put(int key, int value)
    {
        arr[key] = value;
    }

    int get(int key)
    {
        return arr[key];
    }

    void remove(int key)
    {
        arr[key] = -1;
    }
};
