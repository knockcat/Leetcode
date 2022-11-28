class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        int n = arr.size();
        long long ans = 0;
        long long mod = (int) 1e9+7;
        
        vector<int> next_smaller(n), prev_smaller(n);
        stack<int> st1, st2;
        
        for(int i = 0; i<n; ++i)
        {
            next_smaller[i] = n - i - 1;
            prev_smaller[i] = i;
        }
        
        for(int i = 0; i<n; ++i)
        {
            while(!st1.empty() and arr[st1.top()] > arr[i])
            {
                next_smaller[st1.top()] = i - st1.top() - 1;
                st1.pop();
            }
            st1.push(i);
        }
        
        for(int i = n-1; i>= 0; --i){
            while(!st2.empty() and arr[st2.top()] >= arr[i])
            {
                prev_smaller[st2.top()] = st2.top() - i - 1;
                st2.pop();
            }
            st2.push(i);
        }
        
        for(int i= 0; i<n; ++i)
        {
            ans += arr[i]*((next_smaller[i]+1)%mod * (prev_smaller[i]+1))%mod;
            ans %= mod;
        }
        
        return ans;
    }
};

/*
    O(n^2)
    class Solution {
    public:
        int sumSubarrayMins(vector<int>& arr) {

            int n = arr.size();
            long long ans = 0;
            int mod = 1e9 + 7;


            for(int i = 0; i < n; ++i)
            {
                int mini = INT_MAX;
                for(int j = i; j < n; ++j){
                    if(arr[j] < mini)
                    {
                        mini = arr[j];
                        ans += arr[j];
                        ans %= mod;
                    }
                    else
                    {
                        ans += mini;
                        ans %= mod;
                    }
                }
            }
            return ans%mod;
        }
};

*/

/*
    O(n^3)
    
    class Solution {
    public:
    int sumSubarrayMins(vector<int>& arr) {
        int sum =0 ,n = arr.size();
        for(int i=0;i<n;++i)
            {
            for(int j=i;j<n;++j) 
                {
                int mini = INT_MAX;
                for(int k =i;k<=j;++k) 
                    {
                    mini = min(arr[k], mini) ;
                }
                sum += mini;
            }
        }
        return sum;
    }
};
*/