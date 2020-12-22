class Solution
{
public:
    int smallestRangeII(vector<int> &A, int K)
    {
        sort(A.begin(), A.end());
        int n = A.size() - 1;
        int MAX = A[n];
        int MIN = A[0];
        int result = MAX - MIN;
        for (int i = 0; i < n; i++)
        {
            int minimum = min(MIN + K, A[i + 1] - K);
            int maximum = max(MAX - K, A[i] + K);
            result = min(result , maximum-minimum);
        }
        return result;
    }
};
