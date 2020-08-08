class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int zeros = 0;
        int left = 0;
        int ans = 0;
        int n = A.size();
        for(int i = 0; i < n; i++){
            if(A[i] == 0){
                zeros++;
            }
            while(zeros > K){
                if(A[left] == 0){
                    zeros--;
                }
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
        
    }
};
