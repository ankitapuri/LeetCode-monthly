class Solution {
public:
    bool ispall(string s){
        int l=0, r=s.length()-1;
        if(l==r) return true;
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++; r--;
        }
        return true;
    }
    void func(string s,vector<vector<string>>&result,vector<string>&temp){
        if(!s.length()) result.push_back(temp);
        for(int i=0;i<s.length();i++){
            string left=s.substr(0,i+1);
            if(ispall(left)){
                temp.push_back(left);
                func(s.substr(i+1),result,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> temp;
        func(s,result,temp);
        return result;
    }
};
