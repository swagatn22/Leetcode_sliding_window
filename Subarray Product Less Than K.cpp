class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        if(n == 0) return 0;
        if(k <= 1) return 0;
        int prd = 1;
        int left = 0;
        for(int i = 0; i < n; i++){
            prd *= nums[i];
            while( prd >= k){
                prd /= nums[left];
                left++;
            }
            ans += i-left+1;
        }
        return ans;
    }
};
