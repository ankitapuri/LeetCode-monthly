class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[k++]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums ;
    }
};
