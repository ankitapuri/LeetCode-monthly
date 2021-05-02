class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
       for(auto i=0;i<n/2;i++)
       {
           swap(s[i],s[n-i-1]);
       }
       for(int i =0;i<n;i++)
           cout<<s[i];
    }
};
