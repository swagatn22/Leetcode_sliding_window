class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum = 0;
        int start = 0; 
        int ans  = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == s){
                return 1;
            }
            sum += nums[i];
            while(sum >= s){
                ans = min(ans,i-start+1);
                sum -= nums[start];
                start++;
            }
        }
        return ans;
    }
};
