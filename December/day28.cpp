class Solution {
public:
    int reachNumber(int target) {
        int ans=0;
        target=abs(target);
        while(target>0)
            target-=(++ans);
        return target%2==0?ans:ans+1+ans%2;
    }
};
