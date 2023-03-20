class Solution {
public:
    int distMoney(int money, int children) {
        
       
        if(money < children)
            return -1;
        
        money -= children;
        
        if(money / 7 == children)
        {
            if(money % 7 == 0)
                return children;
        }
        else if(money/7 == children-1)
        {
            if(money % 7 == 3)
                return children-2;
        }
        
        return min(children-1, money/7);
    }
};
