class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
             int MAX_Index= 0;
            for(int i=1;i<arr.size();i++)
            {
                if(arr[MAX_Index]<arr[i])
                    MAX_Index=i;
             } if(arr.size()<=2 || MAX_Index== 0 || MAX_Index==arr.size()-1)
                return false;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(i<MAX_Index)
            {
                if(arr[i]<arr[i+1]) continue;
                else return false;
            } else
            {
                if(arr[i]>arr[i+1]) continue;
                else return false;
            }
                
        }
        return true;
            
        }
};
