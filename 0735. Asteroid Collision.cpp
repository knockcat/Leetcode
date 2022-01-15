735. Asteroid Collision

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        
        for(int i = 0; i<asteroids.size(); i++)
        {
            if(s.empty() || asteroids[i]>0)
                s.push(asteroids[i]);
        
            else    //asteroid are in negative
             {
                 while(1)
                 {
                     int top = s.top();
                        if (top<0)
                        {
                            s.push(asteroids[i]);        //negative mass push
                            break;
                        }
                        else if (top == -asteroids[i])    //opposite with equal mass both will explode
                        {
                            s.pop();
                            break;
                        }
                        else if(top > (-asteroids[i]))   //opposite direction lesser mass going to be exploded  
                        {
                        break;
                        }
                        else
                        {
                            s.pop();
                            if(s.empty())
                            {
                                s.push(asteroids[i]);
                                break;
                            }
                        }
                    
                }
            }
        }
        
        vector<int> ans(s.size(),0);
        
        for(int i = s.size() - 1; i>=0 ;i--)
        {
           ans[i] = (s.top());
           s.pop();
        }
        
        return ans;
    }
};