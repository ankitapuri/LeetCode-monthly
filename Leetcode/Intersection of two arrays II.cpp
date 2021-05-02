class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        vector<int>::iterator itr;
        for(int i=0;i<nums1.size();i++)
        {
           itr =  find(nums2.begin(),nums2.end(),nums1[i]);
              if(itr!=nums2.end())
                       {                      
                  res.push_back(nums1[i]);
                    nums2.erase(itr);
                       }
           
        }  
        return res;
    }
};
