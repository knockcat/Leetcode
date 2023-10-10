class Solution {
public:
    int minOperations(vector<int>& arr) {
    int n = arr.size();
    if(n == 1) return 0;  
    sort(arr.begin(), arr.end());
	
	vector<int> a;   
    for(int i = 0; i < n-1; i++) {
        while(arr[i] == arr[i+1]) i++;
        a.push_back(arr[i]);
    }
    if(arr.back() != a.back()) a.push_back(arr.back());
    
    int mx = 0;
    for(int i = 0, j = 0; i < a.size(); i++) {
        while(j <= i && (a[i]-a[j]+1) > n) j++;   
        mx = max(mx, i-j+1);                        
    }
    return n - mx;
}
};