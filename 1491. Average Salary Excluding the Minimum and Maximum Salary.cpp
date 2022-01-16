//✅ 1491. Average Salary Excluding the Minimum and Maximum Salary

class Solution {
public:
    double average(vector<int>& salary) {
        if(salary.size()==2) 
            return 0;
        sort(salary.begin(),salary.end());
        
        double max = salary[salary.size()-1];
        
        double min = salary[0];
        
        double sum = 0;
        for(int i = 0; i<salary.size(); i++)
        {
            sum += salary[i];
        }
        // cout << max << " " << min << " " << sum << " " << salary.size();
        return (sum - (min + max)) / (salary.size() - 2);
        
 
        
        
    }
};