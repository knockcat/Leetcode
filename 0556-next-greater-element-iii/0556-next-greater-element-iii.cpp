class Solution {
public:
    
    long long next_Permutation(int n)
    {
        string str = to_string(n);
        
        int breakPoint = -1;
        
        int m = str.size();
        
        for(int i = m-2; i >= 0; --i)
        {
            if(str[i] < str[i+1])
            {
                breakPoint = i;
                break;
            }
        }
        
        if(breakPoint == -1)
        {
            reverse(str.begin(), str.end());
        }
        else
        {
            for(int i = m-1; i > breakPoint; --i)
            {
                if(str[i] > str[breakPoint])
                {
                    swap(str[i], str[breakPoint]);
                    break;
                }
            }
            
            reverse(str.begin() + breakPoint + 1 , str.end());
        }
        
        return stoll(str);
    }
    
    int nextGreaterElement(int n) {
        
        long long nextGreater = next_Permutation(n);
        
        return (nextGreater > INT_MAX or nextGreater <= n ? -1 : nextGreater);
        
    }
};