class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         for(int it=0;it<nums.size()-1;it++)
        {
            if(nums[it] == nums[it+1])
            {return true;
             break;}
            
        }
        
        return false;
    }
};

// In this question , in order to reduce time complexity and get rid of run-time error we ended the loop till nums.size()-1   **IMPORTANT**
