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
​
O(n)
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