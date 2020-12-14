class Solution {
public:
    int maxCoins(vector<int>& nums) {
        vector<int> num{1};
        num.insert(num.begin()+1,nums.begin(),nums.end()); num.push_back(1);
        int n=num.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=2;i<n;i++){
            for(int j=i-1;j>=1;j--){
                for(int k=j-1;k>=0;k--) dp[k][i] = max(dp[k][i], num[k]num[j]num[i]+dp[k][j]+dp[j][i]);
            }
        }
        return dp[0][n-1];
    }
};
