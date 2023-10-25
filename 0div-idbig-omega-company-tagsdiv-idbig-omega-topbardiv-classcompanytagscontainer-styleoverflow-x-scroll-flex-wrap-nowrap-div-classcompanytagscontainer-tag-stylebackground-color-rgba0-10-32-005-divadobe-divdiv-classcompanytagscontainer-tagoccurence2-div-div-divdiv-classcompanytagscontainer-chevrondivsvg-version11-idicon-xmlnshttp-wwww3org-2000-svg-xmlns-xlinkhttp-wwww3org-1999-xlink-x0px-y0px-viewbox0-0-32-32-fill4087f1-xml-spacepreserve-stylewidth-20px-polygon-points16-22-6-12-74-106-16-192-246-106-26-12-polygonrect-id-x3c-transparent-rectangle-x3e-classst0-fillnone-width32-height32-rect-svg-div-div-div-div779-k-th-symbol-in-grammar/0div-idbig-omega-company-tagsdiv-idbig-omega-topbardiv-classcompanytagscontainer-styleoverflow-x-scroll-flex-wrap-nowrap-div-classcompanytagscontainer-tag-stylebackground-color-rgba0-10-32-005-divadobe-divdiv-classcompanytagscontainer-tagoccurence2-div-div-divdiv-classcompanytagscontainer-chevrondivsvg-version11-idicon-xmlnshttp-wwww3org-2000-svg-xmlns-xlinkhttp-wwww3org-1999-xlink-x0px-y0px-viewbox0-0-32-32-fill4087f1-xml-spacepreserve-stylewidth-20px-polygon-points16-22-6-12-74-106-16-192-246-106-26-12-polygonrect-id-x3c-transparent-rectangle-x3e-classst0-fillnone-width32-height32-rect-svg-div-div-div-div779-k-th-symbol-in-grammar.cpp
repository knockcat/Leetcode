class Solution {
public:
    int kthGrammar(int n, int k) {
        
        if(n == 1 and k == 1)
            return 0;
        
        int mid = pow(2, n-1) / 2;
        
        if(k <= mid)
            return kthGrammar(n-1, k);
        else
            return !kthGrammar(n-1, k-mid);
    }
};