class Solution {
public:
    int findTheLongestSubstring(string s) {
        int mask = 0;
        unordered_map<int, int> m;
        int ans = 0;
        m[0] = -1;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a') {
                mask ^= 1;
            }
            else if(s[i] == 'e') {
                mask ^= 2;
            }
            else if(s[i] == 'i') {
                mask ^= 4;
            }
            else if(s[i] == 'o') {
                mask ^= 8;
            }
            else if(s[i] == 'u') {
                mask ^= 16;
            }
            if(m.find(mask) != m.end()) {
                ans = max(ans,i-m[mask]);
            }
            else {
                m[mask] = i;
            }
        }
        return ans;
    }
};