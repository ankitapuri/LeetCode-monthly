class Solution {
public:
    int majorityElement(vector<int>& nums) {
       set<int>s1;
        for(int i=0;i<nums.size();i++)
        {
            s1.insert(nums[i]);
        }
        for(auto it : s1)
        {
            if (count(nums.begin(),nums.end(),it)>nums.size()/2)
                return it;
        }
        return -1;
    }
};
