690. Employee Importance


class Solution {
public:
    
    void getimp(vector<Employee*> employees, vector<int> sub)
    {
        for(int i = 0; i<sub.size(); i++)
            getImportance(employees,sub[i]);
    }
    int imp = 0;
    int getImportance(vector<Employee*> employees, int id) {
        int size = employees.size();
        
        for(int i = 0; i<size; i++)
        {
            if(employees[i]->id == id)
            {
                imp += employees[i]->importance;
                getimp(employees,employees[i]->subordinates);
            }
        }
        
        return imp;
    }
};
