593. Valid Square

class Solution {
public:
    int getdistance(vector<int>& q,vector<int>& q1)
    {
        int d=((q[0]-q1[0])*(q[0]-q1[0]))+ ((q[1]-q1[1])*(q[1]-q1[1]));
        return d;
    }
   bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        map<int,int> m;
        map<int,float> m1;
        vector<int> v;
         vector<float>v1;
       v.push_back(getdistance(p1,p2));
        v.push_back(getdistance(p2,p3));
         v.push_back(getdistance(p3,p4));
         v.push_back(getdistance(p1,p4));
         v.push_back(getdistance(p1,p3));
        v.push_back(getdistance(p2,p4));
        
        for(int i=0;i<v.size();i++)
        {
           // cout<<v[i]<<" ";
            m[v[i]]++;
        }
        cout<<endl;
              for(auto it=m.begin();it!=m.end();it++)
              {
                  if(m.size()==1 && it->first==0)
                      return false;
                 // cout<<it->first<<" "<<it->second<<endl;
                  if(it->first==0)
                      return false;
                  if(it->second==4 || it->second==2 ||  it->second==6 )
                  {
                      continue;
                  }
                  return false;       
              }
        if(m.size()==1 || m.size()==2)
            return true;
        else return 
            false;
    }
};