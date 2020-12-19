class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {  
       int a = INT_MAX , b = INT_MAX;
       if(nums.size < 3)    // we need to have minimum of 3 elements.
          return false;
       for(int i= 0;i<nums.size();i++)
       {
         if(nums[i] <= a)      //comparing the integers one by one with the initial MAX-defined.
          {
            a = nums[i];
          }
          if(nums[i] <= b)      //comparing the integers one by one with the initial MAX-defined if the first condition fails. 
          {
            b = nums[i];
          }
          else                    // we don't need to store the third variable . 
          { 
            return true;
          }
       }
       return false; 
    }
};
