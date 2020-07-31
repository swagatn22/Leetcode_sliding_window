class Solution {
public:
    int getCount(vector<int> &nums) {
        int count = 0;
        int maxCount = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > maxCount)
                maxCount = nums[i];
            count += nums[i];
        }
        return count - maxCount;
    }
    int characterReplacement(string s, int k) {
        vector<int> hash(26, 0);
        int left = 0, res = 0;
        for(int i = 0; i < s.size(); i++) {
            hash[s[i] - 'A']++;
            while(getCount(hash) > k) {
                hash[s[left++] - 'A']--;
            }
            res = max(res, i - left + 1);
        }
        return res;
    }
};
