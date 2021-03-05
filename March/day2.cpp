class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int total_sum = 0,sum=0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        total_sum = (n)*(n+1)/2;
        vector<int>res(2);
         sum = nums[0];
        for (int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1]) sum = sum +nums[i];
             else    res[0]= nums[i];
         }
       res[1] = abs(total_sum - sum);
        return res;
    }
     
};
