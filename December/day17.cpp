class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> umap1,umap2;
        int n = A.size(),count = 0;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            umap1[A[i]+B[j]]++;
            umap2[C[i]+D[j]]++;
          }
        }
        for(auto x: umap1)
        {
         int num = x.first;
         if(umap2.find(-1*num)!=umap2.end())
           count+=x.second*umap2[-1*num];
        }
        return count;
    }
};
