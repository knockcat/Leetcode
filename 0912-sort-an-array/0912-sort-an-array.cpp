class Solution {
public:
    
    void merge(int beg, int end, int mid, vector<int>&a)
    {
        int i, j, k;  
        int n1 = mid - beg + 1;    
        int n2 = end - mid;    

        int LeftArray[n1], RightArray[n2]; 

   
        for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[beg + i];    
        for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];    

        i = 0;
        j = 0; 
        k = beg;  

        while (i < n1 && j < n2)    
        {    
            if(LeftArray[i] <= RightArray[j])    
            {    
                a[k] = LeftArray[i];    
                i++;    
            }    
            else    
            {    
                a[k] = RightArray[j];    
                j++;    
            }    
            k++;    
        }    
        while (i<n1)    
        {    
            a[k] = LeftArray[i];    
            i++;    
            k++;    
        }    

        while (j<n2)    
        {    
            a[k] = RightArray[j];    
            j++;    
            k++;    
        }    
    }
    
    void mergeSort(int i, int j, vector<int>& nums)
    {
        if(i < j)
        {
            int mid = i + (j-i)/2;
            mergeSort(i,mid,nums);
            mergeSort(mid+1,j, nums);
            merge(i,j,mid,nums);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        int n = nums.size();
        
        mergeSort(0,n-1,nums);
        
        return nums;
        
    }
};