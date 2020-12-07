class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int> (n)); 

 int T=0,B=n-1,L=0,R=n-1;
//  int dir=0;
 int curr=1;
 while(T<=B&&L<=R)
{
    
        for(int k=0;k<=R;k++){
        if(matrix[T][k]) continue;
         matrix[T][k]=curr++;
		} 
    
    
        for(int k=T;k<=B;k++){
        if(matrix[k][R]) continue;
         matrix[k][R]=curr++;
    }

        for(int k=R;k>=L;k--){
          if(matrix[B][k]) continue;
          matrix[B][k]=curr++;
    }
    
        for(int k=B;k>T;k--){
         if(matrix[k][L]) continue;
		 matrix[k][L]=curr++;
        
    }
	L++;
	T++;
	B--;
	R--;
    
}
        return matrix;
    }
};
