class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int K) {
        return check(A,K)-check(A,K-1);
    }
    int check(vector<int>& A, int K){
        vector<int>hash(20001,0);
        int n = A.size();
        int count = 0;
        int ans =  0;
        int left = 0;
        for(int i = 0; i < n; i++){
            if(hash[A[i]] == 0){
                count++;
            }
            hash[A[i]]++;
            while(count > K){
                hash[A[left]]--;
                if(hash[A[left]] == 0){
                    count--;
                }
                left++;
            }
            ans += i-left;
        }
        return ans;
    }
};
