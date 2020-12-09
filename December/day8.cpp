class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int arr[60]={};
        double count=0;
        for(int i=0;i<time.size();i++)
        {
            count=count+arr[(60-time[i]%60)%60];
            arr[time[i]%60]++;
                                      
        }
        return count;
    }
};
