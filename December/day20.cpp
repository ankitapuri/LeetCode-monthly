class Solution {
public:
    bool isNum(char c){
        return (c >= '2') && (c <= '9');
    }
    string decodeAtIndex(string S, int K) {
        long length = 0, i = 0;
        while(i < S.length() && length < K){
            if(isNum(S[i])) length *= S[i]-'0';
            else length++;
            i++;
        }
        i--;
        while(i >= 0 && (length > K || isNum(S[i]))){
            if(isNum(S[i])){
                length /= S[i]-'0';
                if(length < K && (K % length) != 0) K = K % length;
            }
            else length--;
            i--;
        }
        return S.substr(i,1);
    }
};
