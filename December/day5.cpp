class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         int count=0;
         int k=flowerbed.size();
        for(int i=0;i<k;i++)
        {
            if(flowerbed[i]==0)
            {
                if(( i==0 || flowerbed[i-1]==0) && (i==k-1 || flowerbed[i+1]==0))
                   {
                       ++count;
                       flowerbed[i]=1;
                   }
             }                   
        }
       return count>=n;         
    }
};
