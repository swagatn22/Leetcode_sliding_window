class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(256,0);
        int len = 0;
        int left = 0;
        for(int i = 0, j = 0; i< s.length(); i++){
            hash[s[i]]++;
            while(hash[s[i]] > 1){
                hash[s[left]]--;
                left++;
            }
            len = max(len,i-left+1);
        }
        return len;
    }
};
