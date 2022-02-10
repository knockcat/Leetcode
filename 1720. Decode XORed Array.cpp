// 1720.✅ Decode XORed Array

class Solution
{
public:
    // res[i + 1] = res[i] ^ A[i]
    vector<int> decode(vector<int> &encoded, int first)
    {

        encoded.insert(encoded.begin(), first);

        for (int i = 1; i < encoded.size(); ++i)
        {
            encoded[i] = encoded[i] ^ encoded[i - 1];
        }
        return encoded;
    }
};
