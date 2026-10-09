class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length();
        int result=0;
        for (int i=0;i<n;i++){
            result^=s[i]^t[i];
        }
        return result^t[n];
    }
};