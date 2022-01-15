1539. Kth Missing Positive Number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0] > k)
            return k;
        
        int num = k;
        
        for(int i:arr){
            if(i<=num){
                num++;
            }
            else
                break;
        }
        return num;
    }
};