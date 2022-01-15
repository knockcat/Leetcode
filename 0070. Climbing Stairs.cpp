70. Climbing Stairs


class Solution {
public:
    int climbStairs(int n) {
        long long int arr[50];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        
        for( int i = 3; i<50; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};