class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0;
        vector<int>count = {0,0,0};
        int left  = 0;
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            count[s[i]-'a']++;
            while(left < s.length() && count[0] && count[1] && count[2]){
                ans++;
                count[s[left]-'a']--;
                left++;
            }
            res += ans;
        }
        return res;
    }
};
