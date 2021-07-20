class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0 , max=0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
               wealth+= accounts[i][j];  
            }
            if(wealth> max)
           max = wealth;
             wealth = 0 ;
        }
        
        return max; 
       
    }
};
