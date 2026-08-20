class Solution {
public:
    bool checkString(string s) {
        int cnt=0;
        int n=s.length();
        for (int i=0;i<n;i++){
            if (s[i]=='b') cnt++;
            if (s[i]=='a' && cnt>0) return false;
        }
        return true;
    }
};